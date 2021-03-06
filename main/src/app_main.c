/*
 * app_main.c
 *
 *  Created on: 2018-03-11 15:57
 *      Author: Jack Chen <redchenjs@live.com>
 */

#include "system/event.h"
#include "system/init.h"
#include "system/user.h"

int app_main(void)
{
    event_init();       // System Event

    device_init();      // Onchip Module
    driver_init();      // Other Module

    user_init();        // User Task
    
    return 0;
}
