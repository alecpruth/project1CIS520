/* Tests timer_sleep(-100).  Only requirement is that it not crash. */

#include <stdio.h>
#include "tests/threads/tests.h"
#include "lib/kernel/list.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

extern struct list my_blockedqueue;

void
test_my_alarm (void)
{
  my_timer_sleep(100);
  pass();
}
