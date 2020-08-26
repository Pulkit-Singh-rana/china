#ifndef __KYRON_INPUT_H__
#define __KYRON_INPUT_H__

#include "pin_config.h"
#include "kyron_display.h"

void SetupInputs(void);
bool InSettingMode(void);
void SetSystemTarget(uint8_t &target_flow, uint8_t &target_o2);
bool SystemTargetSetComplete(void);

#endif
