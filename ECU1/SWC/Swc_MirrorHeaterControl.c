#include "Swc_MirrorHeaterControl.h"

typedef enum {
    HEATER_LEVEL_LOW,
    HEATER_LEVEL_MEDIUM,
    HEATER_LEVEL_HIGH,
} HeaterLevel;

#define IN_RANGE(x, a, b)       ((x) >= (a) && (x) <= (b))

FUNC(Std_ReturnType, ControlMirrorHeater_CODE) MirrorHeaterControl(VAR(void, AUTOMATIC))
{
    Rte_Call_WdgMCheckpointReached(SE3_ID,CP_ID_3)
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) tempData, humiData;

    Rte_Read_RP_TempData_ReceiveTemperature(tempData);
    Rte_Read_RP_HumidData_ReceiveHumidity(humiData);
    if (IN_RANGE(tempData, 30, 32) && IN_RANGE(humiData, 80, 84)) {             // very small rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_LOW);
    } else if (IN_RANGE(tempData, 24, 30) && IN_RANGE(humiData, 85, 95)) {      // small rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_MEDIUM);
    } else if (IN_RANGE(tempData, 22, 26) && IN_RANGE(humiData, 96, 100)) {     // big rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_HIGH);
    } else {                                                                    // no rain
        Rte_Write_PP_MHControl_HeaterControlSignal(OFF);
    }
    Rte_Call_WdgMCheckpointReached(SE1_ID,CP_ID_4)
    return ret;
}