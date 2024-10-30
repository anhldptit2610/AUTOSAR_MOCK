#include "Rte_HeaterElement.h"

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
