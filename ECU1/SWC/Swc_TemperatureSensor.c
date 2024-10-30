#include "Swc_TemperatureSensor.h"


FUNC(Std_ReturnType, RTE_CODE) ReadTemperatureAndSendData(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_VAR) tempData;

    Rte_Call_TempSensorIO_GetData(TEMP_SENSOR_ID, tempData);
    Rte_Write_PP_TempData_TempData(*tempData);
    return ret;
}