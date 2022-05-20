#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <vlc/vlc.h>
#include "judgment.h"



int main(void) {

  checkPoint:
  printf("Who is your waifu? ");
  scanf("%s", waifu);

  if (strcmp(waifu, "exit") == 0)
    {
      exit(0);
    }

  else if (check(waifu) == 0){
    printFile(waifu);
    getSauce();
    judgeChoice();
  }

  else {
    printf("%s is not a valid choice.\nPlease try again\n", waifu);
  }
  goto checkPoint;



  return 0;
}
