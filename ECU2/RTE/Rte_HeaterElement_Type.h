#ifndef RTE_HEATERELEMENT_TYPE_H_
#define RTE_HEATERELEMENT_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Rte_Types.h"

typedef enum {
    HEATER_LEVEL_LOW,
    HEATER_LEVEL_MEDIUM,
    HEATER_LEVEL_HIGH,
} HeaterLevel;

#ifdef __cplusplus
}
#endif