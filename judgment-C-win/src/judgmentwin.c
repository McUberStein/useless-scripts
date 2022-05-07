#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>



char waifu[10];


int judgeChoice(){



  if (strcmp(waifu,"zerotwo") == 0 ||
      (strcmp(waifu,"lucoa") == 0 ||
       (strcmp(waifu,"marin") == 0||
       (strcmp(waifu,"astolfo") ==0 ))))

    {
     printf("You are cultured\n");
     PlaySound(TEXT("snd/snd4.wav"), NULL, SND_ASYNC);
    }

  else if (strcmp(waifu,"raphtalia") == 0 ||
           (strcmp(waifu,"toga") == 0 ||
            (strcmp(waifu,"albedo") == 0 ||
             (strcmp(waifu,"darkness") == 0 ||
              (strcmp(waifu,"horo") == 0 ||
               (strcmp(waifu,"wiz") == 0 ||
                 (strcmp(waifu,"aqua") ==0 )))))))

    {
     printf("You have good taste\n");
    }

  else if (strcmp(waifu,"gabi") == 0 ||
           (strcmp(waifu,"malty") == 0 ||
            (strcmp(waifu,"ichigo") == 0)))
            {
              printf("You fucking donut\n");
              PlaySound(TEXT("snd/snd5.wav"), NULL, SND_ASYNC);
            }

  else if (strcmp(waifu,"komi") == 0 ||
      (strcmp(waifu,"speedwagon") == 0 ||
            (strcmp(waifu,"ishigami") == 0 ||
            (strcmp(waifu,"dio") == 0))))
    {
      printf("You are godlike\n");
    }

  else if (strcmp(waifu,"bismarck") == 0 ||
           (strcmp(waifu,"eugen") == 0 ||
            (strcmp(waifu,"elbe") == 0 ||
             (strcmp(waifu,"friedrich") == 0 ||
              (strcmp(waifu, "selphius") == 0)))))
    {
      printf("Deutschland indeed\n");
      PlaySound(TEXT("snd/snd2.wav"), NULL, SND_ASYNC);

    }

  else if (strcmp(waifu,"koneko") == 0 ||
           (strcmp(waifu,"komeko") == 0 ||
            (strcmp(waifu,"melty") == 0 ||
             (strcmp(waifu,"kana") == 0 ))))
    {
      printf("Bruh, what?\n");
      PlaySound(TEXT("snd/snd1.wav"), NULL, SND_ASYNC);
    }

 else if (strcmp(waifu, "giorno") == 0)
    {
      printf("GOLDEN WIND\n");
      PlaySound(TEXT("snd/snd3.wav"), NULL, SND_ASYNC);
    }

  else if (strcmp(waifu,"exit") == 0)
    {
      exit(0);
    }

 else{
    printf("%s is not on the list\nPlease try again\n", waifu);
    return 1;
  }



  return 0;
}




int main() {

  checkPoint:
  printf("Who is your waifu? ");
  scanf ("%s", waifu);
  judgeChoice();
  goto checkPoint;

  return 0;
}
