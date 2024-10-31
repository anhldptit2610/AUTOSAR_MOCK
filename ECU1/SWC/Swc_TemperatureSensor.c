#include "Swc_TemperatureSensor.h"

#define TEMP_SENSOR_ID                  TEMP_SENSOR_HDC1080 

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_TempData_TempData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;

    Rte_Call_TempSensorIO_GetData(TEMP_SENSOR_ID, data);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) ReadTemperatureAndSendData(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) tempData;

    Rte_Read_RP_TempData_TempData(TEMP_SENSOR_ID, tempData);
    Rte_Write_PP_TempData_TempData(*tempData);
    Rte_Call_WdgMCheckpointReached(SE1_ID, CP_ID_1);
    return ret;
}