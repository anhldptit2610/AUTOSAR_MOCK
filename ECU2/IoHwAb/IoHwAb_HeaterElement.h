#ifndef IOHWAB_HEATERELEMENT_H_
#define IOHWAB_HEATERELEMENT_H_

#include "Std_Types.h"
#include "Compiler_Cfg.h"
#include "Compiler.h"

extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOn(VAR(TempSensor_IdType, AUTOMATIC), VAR(HeaterLevel, AUTOMATIC));
extern FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HeaterElementIO_TurnHeaterOff(VAR(TempSensor_IdType, AUTOMATIC));

#endif