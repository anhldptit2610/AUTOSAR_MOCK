#ifndef RTE_TEMPERATURESENSOR_H_
#define RTE_TEMPERATURESENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Compiler.h"
#include "Compiler_Cfg.h"
#include "Std_Types.h"
#include "IoHwAb_TemperatureSensor.h"
#include "Rte_MemMap.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TempSensorIO_GetData(VAR(TempSensor_IdType, AUTOMATIC), P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_TempData_TempData(VAR(AUTOSAR_uint16, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_TempData_TempData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA));

/*NvM Code for Temperature Sensor*/

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TSRP_NvM_ReadTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TSPP_NvM_WriteTempSensor( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );

#ifdef __cplusplus
}
#endif