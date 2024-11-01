#include "OS.h"
#include "Rte_HumiditySensor.h"

extern FUNC(Std_ReturnType, RTE_CODE) ReadHumidityAndSendData(VAR(void, AUTOMATIC));

FUNC(Std_ReturnType, RTE_CODE) Rte_ReadHumidityAndSendData(VAR(void, AUTOMATIC))
{
    ReadHumidityAndSendData();
}

VAR(AUTOSAR_uint8, AUTOMATIC) HumidSensorData;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HumiSensor_ReadData(VAR(HumidSensor, AUTOMATIC) id);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HumiSensorIO_GetData(VAR(HumiSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HumiSensor_ReadData(id, data);
    return ret;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_HumiData_HumiData(VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    HumidSensorData = data;
    return ret;
}

/******************************************************************************/
/* Name        : Rte_Call_HMRP_NvM_ReadHumidSensor                            */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read humidity calibration data from NvM SWC                  */
/* Note        : Port belongs to Humidity Sensor SWCs                         */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HMRP_NvM_ReadHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_DstPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock02, (uint16*)NvM_DstPtr);
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_HMPP_NvM_WriteHumidSensor                           */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Write humidity calibration data to Humidity Sensor SWC       */
/* Note        : Port belongs to Humidity Sensor SWCs                         */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HMPP_NvM_WriteHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_WriteBlock(NvMBlock01, (uint16*)NvM_SrcPtr);
    return ret_val;
}
	