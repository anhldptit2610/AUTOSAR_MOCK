#ifndef IOHWAB_HEATERELEMENT_H_
#define IOHWAB_HEATERELEMENT_H_

#include "Std_Types.h"
#include "Compiler_Cfg.h"
#include "Compiler.h"

typedef enum {
    HEATER_LEVEL_LOW,
    HEATER_LEVEL_MEDIUM,
    HEATER_LEVEL_HIGH,
} HeaterLevel;

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOn(VAR(HeaterLevel, AUTOMATIC));
extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOff(VAR(void, AUTOMATIC));

#endif