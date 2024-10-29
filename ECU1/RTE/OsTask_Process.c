/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/

#include "Std_Type.h"
#include "Com.h"
#include "Os.h"

/*----------------------------------------------------------------------------*/
/* task impliment                                                             */
/*----------------------------------------------------------------------------*/

extern FUNC(void, RTE_CODE) Rte_PeriodicProcess(VAR(void, AUTOMATIC));
/******************************************************************************/ 
/* Name        : Task_Process                                                 */ 
/* Param       :                                                              */ 
/* Return      :                                                              */ 
/* Note        : Task triggered by periodic event                         */ 
/******************************************************************************/ 
TASK (OsTask_Process)
{
    VAR(EventMaskType, AUTOMATIC) ev;

    while(1)
    {
        (void) WaitEvent(Periodic_Event);
        (void) GetEvent(OsTask_Process, &ev);
        (void) ClearEvent(ev & Periodic_Event);

        if ((ev & Periodic_Event) != (EventMaskType)0)
        {
            Rte_PeriodicProcess();
        }
    }
}

/* End of OsTask_Process.c */