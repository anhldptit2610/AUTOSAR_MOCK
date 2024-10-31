#include "OS.h"
#include "Rte_TemperatureSensor.h"

VAR(AUTOSAR_uint16, AUTOMATIC) TempSensorData;


extern FUNC(Std_ReturnType, RTE_CODE) ReadTemperatureAndSendData(VAR(void, AUTOMATIC));

FUNC(Std_ReturnType, RTE_CODE) Rte_ReadTemperatureAndSendData(VAR(void, AUTOMATIC))
{
    ReadTemperatureAndSendData();
}

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_TempSensor_ReadData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data);

/******************************************************************************/
/* Name        : Rte_Call_TempSensorIO_GetData                                */
/* Param       : id - the ID of the temperature sensor                        */
/*               data - pointer to the variable store the sensor data         */
/* Return      :                                                              */
/* Contents    : Call the IO hardware abstraction API to get the temperature  */
/* Note        :                                                              */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TempSensorIO_GetData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_TempSensor_ReadData(id, data);
    return ret;
}

/******************************************************************************/
/* Name        : Rte_Write_PP_TempData_TempData                               */
/* Param       : data - the data we want to write to the TempData's PPort     */
/* Return      :                                                              */
/* Contents    : write the data to the PPort in the TemperatureSensor SWC     */
/* Note        :                                                              */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_TempData_TempData(VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    TempSensorData = data;
    return ret;
}

/******************************************************************************/
/* Name        : Rte_Call_TSRP_NvM_ReadTempSensor                             */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read temperature calibration data from NvM SWC               */
/* Note        : Port belongs to Temperature Sensor SWCs                      */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TSRP_NvM_ReadTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock01, (uint16*)NvM_DstPtr)
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_NvPP_NvM_WriteTempSensor                            */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Write temperature calibration data to Temperature Sensor SWC */
/* Note        : Port belongs to Temperature Sensor SWCs                      */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TSPP_NvM_WriteTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_WriteBlock(NvMBlock01, (uint16*)NvM_SrcPtr)
    return ret_val;
}