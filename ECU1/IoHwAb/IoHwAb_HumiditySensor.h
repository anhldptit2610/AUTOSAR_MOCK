#ifndef IOHWAB_HUMIDITYSENSOR_H_
#define IOHWAB_HUMIDITYSENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Compiler.h"

typedef enum {
    HUMI_SENSOR_HDC1080,
    HUMI_SENSOR_SHT31,
    HUMI_SENSOR_DHT22,
    HUMI_SENSOR_HTU21D,
} HumidSensor;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HumiSensor_ReadData(VAR(TempSensor, AUTOMATIC) , P2VAR(AUTOSAR_uint16, AUTOMATIC));

#ifdef __cplusplus
}
#endif