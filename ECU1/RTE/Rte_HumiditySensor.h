#ifndef RTE_HUMIDITYSENSOR_H_
#define RTE_HUMIDITYSENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Compiler.h"
#include "Compiler_Cfg.h"
#include "Std_Types.h"
#include "IoHwAb_HumiditySensor.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HumiSensorIO_GetData(VAR(HumiSensor, AUTOMATIC), P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_HumiData_HumiData(VAR(AUTOSAR_uint16, AUTOMATIC));
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiData_HumiData(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA));

#ifdef __cplusplus
}
#endif