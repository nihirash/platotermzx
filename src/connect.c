#ifdef __SPECTRANET__
#include <conio.h>
#include <spectrum.h>
#include <string.h>
#include "connect.h"
#include "help.h"

extern char host_name[32];

/**
 * Connect to host prompt and input
 */
void connect(void)
{
  /* gotoxy(1,19); */
  /* cprintf("Press EXTEND 0 for help with PLATO keys."); */
  help_clear();
  help_prompt_input("Enter Hostname or <ENTER> for IRATA.ONLINE: ");
  cgets(host_name);
  if (strcmp(host_name,"")==0)
    {
      strcpy(host_name,"IRATA.ONLINE");
    }
  help_clear();
}
#endif

#ifdef __UNO__
#include "uno/zifi.h"
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "protocol.h"

void connect() 
{
  char host[32];
  char buff[80];

  strcpy(host, "IRATA.ONLINE");

  initWifi();
  if (openTcp(&host, "8005")) {
    sprintf(&buff, "Connected to host %s", &host);
    ShowPLATO(&buff, strlen(buff));
    is_connected = 1;
  } else {
    sprintf(&buff, "Failed to connect to host %s  ", &host);
    ShowPLATO(&buff, strlen(buff));
    for (;;);
  }

}
#endif
