/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/

#include "Std_Type.h"
#include "Com.h"
#include "Os.h"
#include "Os_Cfg.h"

/*----------------------------------------------------------------------------*/
/* task implement                                                             */
/*----------------------------------------------------------------------------*/

extern FUNC(void, RTE_CODE) Rte_MirrorHeaterControl(VAR(void, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_ReadTemperatureAndSendData(VAR(void, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_ReadHumidityAndSendData(VAR(void, AUTOMATIC));

/******************************************************************************/ 
/* Name        : Task_Process                                                 */ 
/* Param       :                                                              */ 
/* Return      :                                                              */ 
/* Note        : Task triggered by periodic event                             */ 
/******************************************************************************/ 
TASK (OsTask_Process)
{
    VAR(EventMaskType, AUTOMATIC) ev;

    while(1)
    {
        (void) WaitEvent(Periodic_Event_1s);
        (void) GetEvent(OsTask_Process, &ev);
        (void) ClearEvent(ev & Periodic_Event_1s);

        if ((ev & Periodic_Event_1s) != (EventMaskType)0)
        {
            Rte_ReadTemperatureAndSendData();
            Rte_ReadHumidityAndSendData();
            Rte_MirrorHeaterControl();
        }
    }
}

/* End of OsTask_Process.c */