#include "Rte_NvM.h"

/******************************************************************************/
/* Name        : Rte_Call_NvRP_NvM_ReadTempSensor                             */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read temperature calibration data from Temperature Sensor SWC*/
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr ) {
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock01, (uint16*)NvM_DstPtr);
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_NvPP_NvM_WriteTempSensor                            */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Write temperature calibration data to Temperature Sensor SWC */
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvPP_NvM_WriteTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_WriteBlock(NvMBlock01, (uint16*)NvM_SrcPtr);
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_NvRP_NvM_ReadHumidSensor                            */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read humidity calibration data from Temperature Sensor SWC   */
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock02, (uint16*)NvM_DstPtr);
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_NvRP_NvM_WriteHumidSensor                           */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Write temperature calibration data to Humidity Sensor SWC    */
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_WriteBlock(NvMBlock02, (uint16*)NvM_SrcPtr);
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_NvRP_NvM_ReadTmpHumidValue                          */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read default temp&humid value to trigger system depends on season                    */
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock04, (uint16*)NvM_DstPtr);
    return ret_val;
}
/******************************************************************************/
/* Name        : Rte_Call_NvPP_NvM_WriteTmpHumidValue                         */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Write default temp&humid value to trigger system depends on season                   */
/* Note        : Port belongs to NvM SWCs                                     */
/******************************************************************************/

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvPP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_WriteBlock(NvMBlock04, (uint16*)NvM_SrcPtr);
    return ret_val;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Get_Config(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data)
{
    Rte_Call_NvRP_NvM_ReadHumidSensor(data);
    Rte_Call_NvRP_NvM_ReadTempSensor(data);
}
