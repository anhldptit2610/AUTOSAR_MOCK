#include "OS.h"
#include "Rte_TemperatureSensor.h"

VAR(AUTOSAR_uint16, AUTOMATIC) TempSensorData;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_TempSensor_ReadData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TempSensorIO_GetData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_TempSensor_ReadData(id, data);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_TempData_TempData(VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    TempSensorData = data;
    return ret;
}

