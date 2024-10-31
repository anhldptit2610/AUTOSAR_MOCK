#include "Rte_HeaterElement.h"

extern VAR(AU)
VAR(AUTOSAR_uint8, AUTOMATIC) HeaterControlSignal;
VAR(HeaterLevel, AUTOMATIC) HeaterLevel;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOn(VAR(HeaterLevel, AUTOMATIC) lvl);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOn(VAR(HeaterLevel, AUTOMATIC) lvl)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HeaterElementIO_TurnHeaterOn(lvl);
    return ret;
}

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOff(VAR(void, AUTOMATIC));

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOff(VAR(void, AUTOMATIC))
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HeaterElementIO_TurnHeaterOff();
    return ret;
}

FUNC(Std_ReturnTyRe, RTE_CODE) Rte_Read_RP_MHControl_HeaterControlSignal(P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) signal)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    *signal = HeaterControlSignal;
    return ret;
}

FUNC(Std_ReturnTyRe, RTE_CODE) Rte_Read_RP_MHControl_HeaterLevel(P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) heaterLevel)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    *heaterLevel = HeaterLevel;
    return ret;
}

extern FUNC(Std_ReturnType, HEATERELEMENT_CODE) HeaterElement(VAR(void, AUTOMATIC))
/******************************************************************************/
/* Name        : HeaterElement                                                */
/* Param       :                                                              */
/* Return      :                                                              */
/* Contents    : Runnable Handle Heater Element Command                       */
/* Note        :                                                              */
/******************************************************************************/
FUNC(void, RTE_CODE) Rte_HeaterElement( VAR(void, AUTOMATIC) ) 
{
    HeaterElement();
}