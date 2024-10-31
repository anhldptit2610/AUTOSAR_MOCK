#include "Swc_HumiditySensor.h"

#define HUMI_SENSOR_ID                  HUMI_SENSOR_HDC1080

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiData_HumiData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;

    Rte_Call_HumiSensorIO_GetData(HUMI_SENSOR_ID, data);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) ReadHumidityAndSendData(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) humiData;

    Rte_Read_RP_HumiData_HumiData(humiData);
    Rte_Write_PP_HumiData_HumiData(*humiData);
    Rte_Call_WdgMCheckpointReached(SE2_ID, CP_ID_2);
    return ret;
}