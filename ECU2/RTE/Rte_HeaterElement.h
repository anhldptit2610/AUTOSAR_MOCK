#ifndef RTE_HEATERELEMENT_H_
#define RTE_HEATERELEMENT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "IoHwAb_HeaterElement.h"
#include "Rte_MemMap.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOn(VAR(HeaterLevel, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HeaterElement_W_To_IoHwAb_TurnHeaterOff(VAR(void, AUTOMATIC));
extern FUNC(Std_ReturnTyRe, RTE_CODE) Rte_Read_RP_MHControl_HeaterControlSignal(P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA));
extern FUNC(Std_ReturnTyRe, RTE_CODE) Rte_Read_RP_MHControl_HeaterLevel(P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA));
#ifdef __cplusplus
}
#endif