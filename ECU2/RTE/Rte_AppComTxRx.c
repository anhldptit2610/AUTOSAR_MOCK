#include "Os.h"
#include "Com.h"
#include "Rte_AppComTxRx.h"

/* AUTOSAR Version Check : Com */
#if ( ( COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION )\
|| ( COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION ) )
#error "AUTOSAR Release Version error between Com and RTE." 
#endif

/******************************************************************************/
/* ModuleID    :                                                              */
/* ServiceID   :                                                              */
/* Name        : RTE_COMCbk_HeaterControl                                     */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* Contents    : Callback function triggered upon receiving ON/OFF signal     */
/*               from COM module to ON/OFF Heater Element System              */
/* Author      :                                                              */
/* Note        :                                                              */
/******************************************************************************/
FUNC(void, RTE_CODE) RTE_COMCbk_HeaterControl(void){
    VAR(uint8, AUTOMATIC) HeaterControlSignal;

    if (COM_ReceiveSignal(SIG_ID_HeaterControl, &HeaterControlSignal) == E_OK) {
        if (HeaterControlSignal == ON) {            
            (void)Rte_Call_PP_HeaterElement_MirrorHeater_On();
        } else {
            (void)Rte_Call_PP_HeaterElement_MirrorHeater_Off();
        }
    }
}


/******************************************************************************/
/* ModuleID    :                                                              */
/* ServiceID   :                                                              */
/* Name        : RTE_COMCbk_HeaterElement                                     */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* Contents    : Callback function triggered upon receiving ON/OFF signal     */
/*               from COM module to ON/OFF Heater Element System              */
/* Author      :                                                              */
/* Note        :                                                              */
/******************************************************************************/
FUNC(void, RTE_CODE) RTE_COMCbk_HeaterLevel(void){
     VAR(uint8, AUTOMATIC) HeaterLevel;

    if (COM_ReceiveSignal(SIG_ID_HeaterLevel, &HeaterLevel) == E_OK) {
        (void)Rte_Write_PP_HeaterElement_HeaterLevel(HeaterLevel);
    }
}