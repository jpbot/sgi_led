#include <sys/syssgi.h>
#include <sysexits.h>

int main(void) {
  syssgi(SGI_SETLED, 0);
  return EX_OK;
}
