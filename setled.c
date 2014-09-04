#include <sys/syssgi.h>
#include <stdio.h>
#include <sysexits.h>

void print_usage( void );

int main(int argc, char * argv[]){
  //need to see two arguments (filename and value to set)
  if(argc == 2){

    //only accept 0 or 1 and then set the LED
    if(argv[1][0] >= '0' && argv[1][0] <= '1'){
      syssgi(SGI_SETLED, argv[1][0] - '0');
      return EX_OK;
    }

    printf("%s: Unknown value\n", argv[0]);
    return EX_DATAERR;
  }

  //print_usage
  printf("USAGE: %s <setvalue>\n", argv[0]);
  printf("setvalue is 0 or 1, turns led off or on. LED is normally off.\n");
  return EX_USAGE;
}
