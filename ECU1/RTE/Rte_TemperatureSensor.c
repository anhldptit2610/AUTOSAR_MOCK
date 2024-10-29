#include "OS.h"
#include "Rte_TemperatureSensor.h"
#include "IoHwAb_TemperatureSensor.h"

VAR(AUTOSAR_uint16, AUTOMATIC) Rte_TempData;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_TempSensor_ReadData(VAR(TempSensor_IdType, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TempSensorIO_GetData(VAR(TempSensor_IdType, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_TempSensor_ReadData(id, &Rte_TempData);
    *data = Rte_TempData;
    return ret;
}

