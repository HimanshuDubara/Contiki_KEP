#include "contiki.h"
#include <stdio.h>

PROCESS(my_app_process,"my_app_process");
AUTOSTART_PROCESSES(&my_app_process);
PROCESS_THREAD(my_app_process,ev,data)
{
  PROCESS_BEGIN();
  printf("Hello World\n");
  PROCESS_END();

}
