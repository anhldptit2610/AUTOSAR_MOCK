#include "OS.h"
#include "Rte_HumiditySensor.h"

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HumiSensor_ReadData(VAR(TempSensor_IdType, AUTOMATIC) id);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HumiSensorIO_GetData(VAR(HumiSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HumiSensor_ReadData(id, data);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_HumiData_HumiData(VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    Rte_HumiData = data;
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiData_HumiData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    Rte_Call_HumiSensorIO_GetData(HUMI_SENSOR_ID, data);
    return ret;
}