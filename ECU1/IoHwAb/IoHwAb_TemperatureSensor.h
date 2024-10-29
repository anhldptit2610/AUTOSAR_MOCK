#ifndef IOHWAB_TEMPERATURESENSOR_H_
#define IOHWAB_TEMPERATURESENSOR_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"
#include "Compiler_Cfg.h"
#include "Compiler.h"

typedef enum {
    TEMP_SENSOR_HDC1080,
    TEMP_SENSOR_HDC2010,
    TEMP_SENSOR_AM2320,
    TEMP_SENSOR_ATH10
} TempSensor;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_TempSensor_ReadData(VAR(TempSensor, AUTOMATIC) , P2VAR(AUTOSAR_uint16, AUTOMATIC));

#ifdef __cplusplus
}
#endif

#endif