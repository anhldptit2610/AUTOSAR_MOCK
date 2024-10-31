#include "Os.h"
#include "Com.h"
#include "Rte_AppComTxRx.h"

extern VAR(AUTOSAR_uint8, AUTOMATIC) HeaterControlSignal;
extern VAR(HeaterLevel, AUTOMATIC) HeaterLevel;

/* AUTOSAR Version Check : Com */
#if ( ( COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION )\
|| ( COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION ) )
#error "AUTOSAR Release Version error between Com and RTE." 
#endif

/******************************************************************************/
/* ModuleID    :                                                              */
/* ServiceID   :                                                              */
/* Name        : Rte_COMCbk_HeaterControl                                     */
/* Param       : void                                                         */
/* Return      : void                                                         */
/* Contents    : Callback function triggered upon receiving ON/OFF signal and */
/*               heater level signal from COM module to control Heater Element*/
/*               System                                                       */
/* Author      :                                                              */
/* Note        :                                                              */
/******************************************************************************/
FUNC(void, RTE_CODE) Rte_COMCbk_HeaterControlSignal(void){
    if (COM_ReceiveSignal(Conf_ComSignal_HeaterControlSignal, &HeaterControlSignal) == E_OK) {
        if (HeaterControlSignal == ON) {       
            COM_ReceiveSignal(ComConf_ComSignal_HeaterLevelSignal, &HeaterLevel);       
        }
        /* Kích hoạt sự kiện cho Task xử lý ở application layer */
        SetEvent(OsTask_Control_Heater, Data_Receive_Event); 
    }
}
