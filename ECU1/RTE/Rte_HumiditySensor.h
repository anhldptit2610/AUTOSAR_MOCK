#ifndef RTE_HUMIDITYSENSOR_H_
#define RTE_HUMIDITYSENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Compiler.h"
#include "Compiler_Cfg.h"
#include "Std_Types.h"
#include "Rte_HumiditySensor_Type.h"
#include "IoHwAb_HumiditySensor.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumiSenIO_Humi(VAR(HumiSensor_IdType, AUTOMATIC), P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA));

#ifdef __cplusplus
}
#endif