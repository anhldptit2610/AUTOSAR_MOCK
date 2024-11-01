#ifndef RTE_NVM
#define RTE_NVM

#include "Rte_MirrorHeaterControl_Types.h"
#include "Compiler.h"
#include "Compiler_Cfg.h"
#include "Std_Types.h"


extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Get_Config(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) data);

#endif