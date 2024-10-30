#ifndef SWC_HUMIDITY_SENSOR_H_
#define SWC_HUMIDITY_SENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Rte_HumiditySensor.h"

extern FUNC(Std_ReturnType, RTE_CODE) ReadHumidityAndSendData(VAR(void, AUTOMATIC));

#ifdef __cplusplus
}
#endif

#endif