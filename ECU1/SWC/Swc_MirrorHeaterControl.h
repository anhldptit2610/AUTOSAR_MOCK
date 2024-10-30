#ifndef SWC_MIRRORHEATERCONTROL_H_
#define SWC_MIRORRHEATERCONTROL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Swc_TemperatureSensor.h"
#include "Swc_HumiditySensor.h"
#include "Rte_MirrorHeaterControl.h"

extern FUNC(Std_ReturnType, ControlMirrorHeater_CODE) MirrorHeaterControl(VAR(void, AUTOMATIC));

#ifdef __cplusplus
}
#endif

#endif