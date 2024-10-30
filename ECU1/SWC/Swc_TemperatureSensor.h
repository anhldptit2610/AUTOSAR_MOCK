#ifndef SWC_TEMPERATURE_SENSOR_H_
#define SWC_TEMPERATURE_SENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Rte_TemperatureSensor.h"

extern FUNC(Std_ReturnType, RTE_CODE) ReadTemperatureAndSendData(VAR(void, AUTOMATIC));

#ifdef __cplusplus
}
#endif

#endif