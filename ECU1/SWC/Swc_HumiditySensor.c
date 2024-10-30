#include "Swc_HumiditySensor.h"

#define HUMI_SENSOR_ID                  HUMI_SENSOR_HDC1080

VAR(AUTOSAR_uint16, AUTOMATIC) humiData;

FUNC(Std_ReturnType, RTE_CODE) ReadHumidityAndSendData(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_VAR) tempData;

    Rte_Read_RP_HumiSenIO_Humi(TEMP_SENSOR_ID, tempData);
    Rte_Write_PP_TempData_TempData(*tempData);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_HumiData_HumiData(VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;

    humiData = *data; 
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiData_HumiData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{

    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_VAR) humiData;

    Rte_Call_HumiSensorIO_GetData(HUMI_SENSOR_ID, humiData);
    Rte_Write_PP_HumiData_HumiData(*humiData);
    return ret;
}