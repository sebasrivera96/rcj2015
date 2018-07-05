#include "bluetooth.h"

#define TIMER_BT_IS_BUSY  127 //SIEHE ROBOCUP.C!!!

void bt_putCh(const uint8_t ch)
{
	timer_bt_is_busy = TIMER_BT_IS_BUSY;

	uart_putc(ch);
}

void bt_putStr(const char *s)
{
	timer_bt_is_busy = TIMER_BT_IS_BUSY;

	while (*s) 
      uart_putc(*s++);
}

void bt_putLong(int32_t num)
{
	char buffer[15];
	ltoa( num , buffer, 10);
  bt_putStr(buffer);
}