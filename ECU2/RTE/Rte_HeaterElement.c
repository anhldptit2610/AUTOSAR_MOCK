#include "Rte_HeaterElement.h"

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOn(VAR(TempSensor_IdType, AUTOMATIC) id, VAR(HeaterLevel, AUTOMATIC) lvl);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOn(VAR(HeaterElement_IdType, AUTOMATIC) id, VAR(HeaterLevel, AUTOMATIC) lvl)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HeaterElementIO_TurnHeaterOn(id, lvl);
    return ret;
}

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOff(VAR(TempSensor_IdType, AUTOMATIC) id);

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOff(VAR(HeaterElement_IdType, AUTOMATIC) id)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = RTE_E_OK;

    ret = IoHwAb_HeaterElementIO_TurnHeaterOff(id);
    return ret;
}
