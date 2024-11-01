#include "Swc_MirrorHeaterControl.h"

typedef enum {
    HEATER_LEVEL_LOW,
    HEATER_LEVEL_MEDIUM,
    HEATER_LEVEL_HIGH,
} HeaterLevel;

HeaterConfig config;

#define IN_RANGE(x, a, b)       ((x) >= (a) && (x) <= (b))

FUNC(Std_ReturnType, ControlMirrorHeater_CODE) MirrorHeaterControl(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) tempData, humiData;

    Rte_Read_RP_TempData_ReceiveTemperature(tempData);
    Rte_Read_RP_HumidData_ReceiveHumidity(humiData);
    if (IN_RANGE(tempData, config.verySmallRainTemp - 2, config.verySmallRainTemp + 2) && IN_RANGE(humiData, config.verySmallRainHumi - 2, config.verySmallRainHumi + 2)) {             // very small rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_LOW);
    } else if (IN_RANGE(tempData, config.smallRainTemp - 2, config.smallRainTemp + 2) && IN_RANGE(humiData, config.smallRainHumi - 2, config.smallRainHumi + 2)) {      // small rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_MEDIUM);
    } else if (IN_RANGE(tempData, config.bigRainTemp - 2, config.bigRainTemp + 2) && IN_RANGE(humiData, config.bigRainHumi - 2, config.bigRainHumi + 2)) {     // big rain
        Rte_Write_PP_MHControl_HeaterControlSignal(ON);
        Rte_Write_PP_MHControl_HeaterLevel(HEATER_LEVEL_HIGH);
    } else {                                                                    // no rain
        Rte_Write_PP_MHControl_HeaterControlSignal(OFF);
    }

    return ret;
}

FUNC(void, ControlMirrorHeater_CODE) InitMirrorHeater( VAR(void, AUTOMATIC) )
{
    Rte_Call_Get_Config(&config);
}