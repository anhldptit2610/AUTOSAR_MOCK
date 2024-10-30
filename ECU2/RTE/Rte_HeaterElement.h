#ifndef RTE_HEATERELEMENT_H_
#define RTE_HEATERELEMENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "IoHwAb_HeaterElement.h"
#include "Rte_MemMap.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOn(VAR(HeaterLevel, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOff(VAR(void, AUTOMATIC));

#ifdef __cplusplus
}
#endif