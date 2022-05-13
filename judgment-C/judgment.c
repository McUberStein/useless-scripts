#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <vlc/vlc.h>

char waifu[30];


int vlcPlay(char sndfile[13], int slpTime)
{
  libvlc_instance_t *player_instance;
  player_instance = libvlc_new(0, NULL);
  libvlc_media_t *soundfile;
  libvlc_media_player_t *player;
  soundfile = libvlc_media_new_path(player_instance, sndfile);
  player = libvlc_media_player_new_from_media(soundfile);
  libvlc_media_player_play(player);
  sleep (slpTime);
  libvlc_media_release(soundfile);
  libvlc_media_player_release(player);
  libvlc_release(player_instance);

  return 0;
}


int printFile(char file[30]){
  FILE *fptr;
  char c;
  char path[30] = "ascii/";
  strncat(path, file, 30);
  fptr = fopen(path, "r");
  c = fgetc(fptr);
  while (c != EOF)
    {
      printf("%c", c);
      c = fgetc(fptr);
    }

  return 0;
}


int judgeChoice(){



  if (strcmp(waifu,"zero_two") == 0 ||
      (strcmp(waifu,"lucoa") == 0 ||
       (strcmp(waifu,"marin_kitagawa") == 0||
       (strcmp(waifu,"astolfo") ==0 ))))

    {
     printf("You are cultured\n");

     vlcPlay("snd/snd4.mp3", 4);

    }

  else if (strcmp(waifu,"raphtalia") == 0 ||
           (strcmp(waifu,"himiko_toga") == 0 ||
            (strcmp(waifu,"albedo") == 0 ||
             (strcmp(waifu,"darkness") == 0 ||
              (strcmp(waifu,"horo") == 0 ||
               (strcmp(waifu,"wiz") == 0 ||
                 (strcmp(waifu,"aqua") ==0 ||
                  (strcmp(waifu,"megumin") == 0))))))))

    {
     printf("You have good taste\n");

     /*vlcPlay(path, number)*/
    }

  else if (strcmp(waifu,"gabi_braun") == 0 ||
           (strcmp(waifu,"malty_melromarc") == 0 ||
            (strcmp(waifu,"ichigo") == 0)))
            {
              printf("You fucking donut\n");

              vlcPlay("snd/snd5.mp3", 1);
            }

  else if (strcmp(waifu,"shouko_komi") == 0 ||
      (strcmp(waifu,"speedwagon") == 0 ||
            (strcmp(waifu,"yu_ishigami") == 0 ||
            (strcmp(waifu,"dio_brando") == 0))))
    {
      printf("You are godlike\n");

      /*vlcPlay(path, number);*/
    }

  else if (strcmp(waifu,"bismarck") == 0 ||
           (strcmp(waifu,"prinz_eugen") == 0 ||
            (strcmp(waifu,"elbe") == 0 ||
             (strcmp(waifu,"friedrich") == 0 ||
              (strcmp(waifu, "selphius") == 0)))))
    {
      printf("Deutschland indeed\n");

      vlcPlay("snd/snd2.mp3", 9);
    }

  else if (strcmp(waifu,"toujou_koneko") == 0 ||
           (strcmp(waifu,"komekko") == 0 ||
            (strcmp(waifu,"melty_melromarc") == 0 ||
             (strcmp(waifu,"kana_kobayashi") == 0 ))))
    {
      printf("Bruh, what?\n");

      vlcPlay("snd/snd1.mp3", 2);
    }

 else if (strcmp(waifu, "giorno") == 0)
    {
      printf("GOLDEN WIND\n");

      vlcPlay("snd/snd3.mp3", 60);
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


int printArt() {
  if (strcmp(waifu,"zero_two") == 0){
    printFile(waifu);
    printf("Anime:Darling in the FranXX\n");
  }
  else if (strcmp(waifu,"lucoa") == 0){
    printFile(waifu);
    printf("Anime:Miss Kobayashi's Dragon Maid\n");
  }
  else if (strcmp(waifu,"marin_kitagawa") == 0){
    printFile(waifu);
    printf("Anime:My dress up darling\n");
  }
  else if (strcmp(waifu,"astolfo") == 0){
    printFile(waifu);
    printf("Anime:Fate\n");
  }
  else if (strcmp(waifu,"raphtalia") == 0){
    printFile(waifu);
    printf("Anime:The Rising of The Shield Hero\n");
  }
  else if (strcmp(waifu,"himiko_toga") == 0){
    printFile(waifu);
    printf("Anime:My Hero Academia\n");
  }
  else if (strcmp(waifu,"albedo") == 0){
    printFile(waifu);
    printf("Anime:Overlord\n");
  }
  else if (strcmp(waifu,"darkness") == 0){
    printFile(waifu);
   printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"megumin") == 0){
    printFile(waifu);
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"horo") == 0){
    printFile(waifu);
    printf("Anime:Spice and Wolf\n");
  }
  else if (strcmp(waifu,"wiz") == 0){
    printFile(waifu);
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"aqua") == 0){
    printFile(waifu);
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"gabi_braun") == 0){
    printFile(waifu);
    printf("Anime:Attack on Titan\n");
  }

  else if (strcmp(waifu,"malty_melromarc") == 0){
    printFile(waifu);
    printf("Anime:The Rising of The Shield Hero\n");
  }
  else if (strcmp(waifu,"ichigo") == 0){
    printFile(waifu);
    printf("Anime:Darling in the FranXX\n");
  }
  else if (strcmp(waifu,"shouko_komi") == 0){
    printFile(waifu);
    printf("Anime:Komi can't communicate\n");
  }
  else if (strcmp(waifu,"speedwagon") == 0){
    printFile(waifu);
    printf("Anime:JoJo\n");
  }
  else if (strcmp(waifu,"yu_ishigami") == 0){
    printFile(waifu);
    printf("Anime:Love is War\n");
  }
  else if (strcmp(waifu,"dio_brando") == 0){
    printFile(waifu);
    printf("Anime:JoJo\n");
  }
  else if (strcmp(waifu,"bismarck") == 0){
    printFile(waifu);
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"prinz_eugen") == 0){
    printFile(waifu);
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"elbe") == 0){
    printFile(waifu);
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"friedrich") == 0){
    printFile(waifu);
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"selphius") == 0){
    printFile(waifu);
    printf("Anime:none(real life)\n");
  }
 else if (strcmp(waifu,"toujou_koneko") == 0){
   printFile(waifu);
   printf("Anime:High School DxD\n");
 }
   else if (strcmp(waifu,"komekko") == 0){
     printFile(waifu);
     printf("Anime:KonoSuba\n");
   }
   else if (strcmp(waifu,"melty_melromarc") == 0){
     printFile(waifu);
     printf("Anime:The Rising of The Shield Hero\n");
   }
   else if (strcmp(waifu,"kana_kobayashi") == 0){
     printFile(waifu);
     printf("Anime:Miss Kobayashi's Dragon Maid\n");
   }
   else if (strcmp(waifu,"giorno") == 0){
     printFile(waifu);
     printf("Anime:JoJo\n");
   }
  return 0;
}




int main() {

  checkPoint:
  printf("Who is your waifu? ");
  scanf("%s", waifu);

  printArt();
  judgeChoice();
  goto checkPoint;

  return 0;
}
