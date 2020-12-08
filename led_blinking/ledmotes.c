

#include <stdio.h>
#include "contiki.h"
#include "dev/leds.h"


static struct etimer blinktimer;
//etimer is event timer

static uint8_t blinks;

PROCESS(blink_process,"LED BLINK PROCESS");
AUTOSTART_PROCESSES(&blink_process);

PROCESS_THREAD(blink_process,ev,data)
{
PROCESS_BEGIN();
blinks=0;
while(1)
{
etimer_set(&blinktimer,CLOCK_SECOND);
//CLOCK_SECOND generates 1 to 10 ms timing signals according to the motes.
PROCESS_WAIT_EVENT_UNTIL(ev==PROCESS_EVENT_TIMER);
leds_toggle(LEDS_RED);
}
PROCESS_END();
}
