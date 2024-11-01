#ifndef RTE_MIRRORHEATERCONTROL_TYPE_H_
#define RTE_MIRRORHEATERCONTROL_TYPE_H_

#include "Rte_Types.h"

typedef struct {
    uint16_t verySmallRainHumi;
    uint16_t verySmallRainTemp;
    uint16_t smallRainHumi;
    uint16_t smallRainTemp;
    uint16_t bigRainHumi;
    uint16_t bigRainTemp;
} HeaterConfig;

#endif