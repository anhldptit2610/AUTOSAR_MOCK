#ifndef RTE_NVM
#define RTE_NVM

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteHumidSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );

// extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadErrorLog( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );

// extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteErrorLog( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_NvRP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );


#endif