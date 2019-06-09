#include <stdbool.h>
#include <input.h>
#include <stdint.h>
#include "protocol.h"
#include "screen.h"
#include "terminal.h"
#include "connect.h"
#include "splash.h"
#include "sound.h"	//Added sound for Keyboard and ready beep

unsigned char already_started=0;

void main(void)
{
  int i=0;
  zx_border(INK_BLUE);  //Tidy up the borders on start up
  screen_init();
  ShowPLATO(splash,sizeof(splash));
  terminal_init();
  terminal_ready();
  io_init();
  for (;;)
    {
      io_main();
      keyboard_main();
    }
}
