#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <spectrum.h>
#include "connect.h"
#include "io.h"
#include "protocol.h"
#include "connect.h"
#include "zifi.h"

extern unsigned char is_extend;  //bring in is_extend for borders


void io_init()
{
  connect();
}

void io_send_byte(unsigned char b)
{
  sendByte(b);
}

void io_main(void)
{ 
  int i, j;
  char c;
  for (j=0;j<10;j++)
    while (isAvail()) {
      c = getByte();
      ShowPLATO(&c, 1);
    }
}
