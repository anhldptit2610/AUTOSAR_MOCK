#include "OS.h"
#include "Rte_HumiditySensor.h"

VAR(AUTOSAR_uint16, AUTOMATIC) Rte_HumiData;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HumiSensor_ReadData(VAR(TempSensor_IdType, AUTOMATIC) id);

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiSenIO_Humi(VAR(HumiSensor_IdType, AUTOMATIC) id, P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA)data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HumiSensor_ReadData(id, &Rte_HumiData);
    *data = Rte_HumiData;
    return ret;
}