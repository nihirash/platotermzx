#include <conio.h>
#include <spectrum.h>
#include <string.h>
#include "connect.h"
#include "help.h"
#include "zifi.h"

char host[32];

/**
 * Connect to host prompt and input
 */
void connect()
{
  help_clear();
  help_prompt_input("Enter Hostname or <ENTER> for IRATA.ONLINE: ");
  cgets(host);
  if (strcmp(host,"")==0)
    {
      strcpy(host, "IRATA.ONLINE");
    }
  help_clear();

  initWifi();
  cprintf("Connected to SSID: %s\n", &ssid);
  if (openTcp(&host, "8005")) {
    cprintf("Connected to host %s", &host);
    is_connected = 1;
  }

}