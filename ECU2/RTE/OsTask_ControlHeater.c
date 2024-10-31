/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/

#include "Std_Type.h"
#include "Com.h"
#include "Os.h"

/*----------------------------------------------------------------------------*/
/* task impliment                                                             */
/*----------------------------------------------------------------------------*/

extern FUNC(void, RTE_CODE) Rte_HeaterElement( VAR(void, AUTOMATIC) );
/******************************************************************************/ 
/* Name        : Task_Control_Heater                                          */ 
/* Param       :                                                              */ 
/* Return      :                                                              */ 
/* Note        : Task triggered by data receive event                         */ 
/******************************************************************************/ 
TASK (OsTask_Control_Heater)
{
    (void) WaitEvent(Data_Receive_Event);
    (void) ClearEvent(Data_Receive_Event);

    Rte_HeaterElement();
}

/* End of OsTask_Control_Heater.c */