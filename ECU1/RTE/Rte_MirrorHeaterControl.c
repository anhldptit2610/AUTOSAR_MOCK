#include"Rte_MirrorHeaterControl.h"

extern VAR(AUTOSAR_uint8, AUTOMATIC) TempSensorData;
extern VAR(AUTOSAR_uint8, AUTOMATIC) HumidSensorData;

/******************************************************************************/
/* Name        : Rte_Read_RP_TempData_ReceiveTemperature                     */
/* Param       : P2VAR: Pointer to memory location which save temperature data   */
/* Return      :                                                              */
/* Contents    : Read temperature data from SWC_TemperatureSensor                    */
/* Note        :                                                              */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_TempData_ReceiveTemperature( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) tempData ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;
    *tempData = TempSensorData;

    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Read_RP_TempData_ReceiveTemperature                     */
/* Param       : P2VAR: Pointer to memory location which save temperature data   */
/* Return      :                                                              */
/* Contents    : Read temperature data from SWC_TemperatureSensor                    */
/* Note        :                                                              */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumidData_ReceiveHumidity( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) humidData ){
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;
    *humidData =ensorData;

    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Write_PP_PositionCommand_SendCommand                     */
/* Param       : VAR: Command to Motor Control SWC                            */
/* Return      :                                                              */
/* Contents    : Send Command to Motor Control SWC                            */
/* Note        :                                                              */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_MirrorHeaterCommand_SendCommand( VAR(AUTOSAR_uint8, AUTOMATIC) command ) {
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;
    VAR(Std_ReturnType, AUTOMATIC) ret;
    VAR(AUTOSAR_uint8, AUTOMATIC) tmp_data = command;

    ret = Com_SendSignal( ComConf_ComSignal_CommandSignal, &tmp_data );
    switch( ret ) {
    case COM_SERVICE_NOT_AVAILABLE:
        ret_val = RTE_E_COM_STOPPED;
        break;
    case COM_BUSY:
        ret_val = RTE_E_COM_BUSY;
        break;
    default:
        /* nothing */
        break;
    }

    return ret_val;
}


/******************************************************************************/
/* Name        : Rte_Call_RP_MemorySeat_NvM_ReadCurrentPosition               */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read current position data from NV memory                    */
/* Note        :                                                              */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr ) {
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock04, (uint16*)NvM_DstPtr)
    return ret_val;
}

/******************************************************************************/
/* Name        : Rte_Call_RP_MemorySeat_NvM_ReadCurrentPosition               */
/* Param       : P2VAR: Pointer to the RAM data block                         */
/* Return      :                                                              */
/* Contents    : Read current position data from NV memory                    */
/* Note        :                                                              */
/******************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr ) {
    VAR(Std_ReturnType, AUTOMATIC) ret_val = RTE_E_OK;

    NvM_ReadBlock(NvMBlock04, (uint16*)NvM_SrcPtr)
    return ret_val;
}


extern FUNC(void, ControlMirrorHeater_CODE) ControlMirrorHeater( VAR(void, AUTOMATIC) );

FUNC(void, RTE_CODE) Rte_ControlMirrorHeater(VAR(void, AUTOMATIC)){
    ControlMirrorHeater();
}