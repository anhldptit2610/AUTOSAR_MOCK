#ifndef RTE_TEMPERATURESENSOR_TYPE_H_
#define RTE_TEMPERATURESENSOR_TYPE_H_

#include "Rte_Types.h"

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_TempSensorIO_GetData(VAR(TempSensor_IdType, AUTOMATIC), P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA));

#endif