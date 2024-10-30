/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/

#include "Std_Type.h"
#include "Com.h"
#include "Os.h"

/*----------------------------------------------------------------------------*/
/* task impliment                                                             */
/*----------------------------------------------------------------------------*/

extern FUNC(void, RTE_CODE) Rte_HandleHeaterControl(VAR(void, AUTOMATIC));
/******************************************************************************/ 
/* Name        : Task_Control_Heater                                          */ 
/* Param       :                                                              */ 
/* Return      :                                                              */ 
/* Note        : Task triggered by data receive event                         */ 
/******************************************************************************/ 
TASK (OsTask_Control_Heater)
{
    VAR(EventMaskType, AUTOMATIC) ev;

    while(1)
    {
        (void) WaitEvent(Data_Receive_Event);
        (void) GetEvent(OsTask_Control_Heater, &ev);
        (void) ClearEvent(ev & Data_Receive_Event);

        if ((ev & Data_Receive_Event) != (EventMaskType)0)
        {
            Rte_HandleHeaterControl();
        }
    }
}

/* End of OsTask_Control_Heater.c */