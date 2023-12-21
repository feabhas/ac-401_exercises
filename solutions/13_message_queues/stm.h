// stm.h
// See project README.md for disclaimer and additional information.
// Feabhas Ltd

#pragma once
#ifndef STM_H
#define STM_H
#include <stdbool.h>
#include "feabhOS_queue.h"

typedef enum stm_event {
    STM_NONE, STM_WHITE_WASH, STM_COLOR_WASH,
    STM_START, STM_COMPLETE,
    STM_PAUSE, STM_RESUME, STM_NUM_EVENTS
} StmEvent;

void stm_init(feabhOS_QUEUE queue);
bool stm_send_event(StmEvent event);
void stm_run(void);

#endif
