#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <vlc/vlc.h>

char waifu[30];

/*char *paths[] = {"./snd/snd1.mp3" , "./snd/snd2.mp3"};

int libvlcPlay() {

  libvlc_instance_t *player_instance;
  player_instance = libvlc_new(0, NULL);
  libvlc_media_t *soundfile;
  libvlc_media_player_t *player;
  soundfile = libvlc_media_new_path(player_instance, "path");
  player = libvlc_media_player_new_from_media(soundfile);
  libvlc_media_player_play(player);
  return 0;
}*/


int judgeChoice(){



  if (strcmp(waifu,"zero_two") == 0 ||
      (strcmp(waifu,"lucoa") == 0 ||
       (strcmp(waifu,"marin_kitagawa") == 0||
       (strcmp(waifu,"astolfo") ==0 ))))

    {
     printf("You are cultured\n");

     libvlc_instance_t *player_instance;
     player_instance = libvlc_new(0, NULL);
     libvlc_media_t *soundfile;
     libvlc_media_player_t *player;
     soundfile = libvlc_media_new_path(player_instance, "snd/snd4.mp3");
     player = libvlc_media_player_new_from_media(soundfile);
     libvlc_media_player_play(player);
     sleep(4);
     libvlc_media_release(soundfile);
     libvlc_media_player_release(player);
     libvlc_release(player_instance);
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

     /*libvlc_instance_t *player_instance;
     player_instance = libvlc_new(0, NULL);
     libvlc_media_t *soundfile;
     libvlc_media_player_t *player;
     soundfile = libvlc_media_new_path(player_instance, "snd/snd4.mp3");
     player = libvlc_media_player_new_from_media(soundfile);
     libvlc_media_player_play(player);
     sleep(4);
     libvlc_media_release(soundfile);
     libvlc_media_player_release(player);
     libvlc_release(player_instance);*/
    }

  else if (strcmp(waifu,"gabi_braun") == 0 ||
           (strcmp(waifu,"malty_melromarc") == 0 ||
            (strcmp(waifu,"ichigo") == 0)))
            {
              printf("You fucking donut\n");

              libvlc_instance_t *player_instance;
              player_instance = libvlc_new(0, NULL);
              libvlc_media_t *soundfile;
              libvlc_media_player_t *player;
              soundfile = libvlc_media_new_path(player_instance, "snd/snd5.mp3");
              player = libvlc_media_player_new_from_media(soundfile);
              libvlc_media_player_play(player);
              sleep(1);
              libvlc_media_release(soundfile);
              libvlc_media_player_release(player);
              libvlc_release(player_instance);
            }

  else if (strcmp(waifu,"shouko_komi") == 0 ||
      (strcmp(waifu,"speedwagon") == 0 ||
            (strcmp(waifu,"yu_ishigami") == 0 ||
            (strcmp(waifu,"dio_brando") == 0))))
    {
      printf("You are godlike\n");

      /*libvlc_instance_t *player_instance;
      player_instance = libvlc_new(0, NULL);
      libvlc_media_t *soundfile;
      libvlc_media_player_t *player;
      soundfile = libvlc_media_new_path(player_instance, "snd/snd2.mp3");
      player = libvlc_media_player_new_from_media(soundfile);
      libvlc_media_player_play(player);
      sleep(9);
      libvlc_media_release(soundfile);
      libvlc_media_player_release(player);
      libvlc_release(player_instance); */
    }

  else if (strcmp(waifu,"bismarck") == 0 ||
           (strcmp(waifu,"prinz_eugen") == 0 ||
            (strcmp(waifu,"elbe") == 0 ||
             (strcmp(waifu,"friedrich") == 0 ||
              (strcmp(waifu, "selphius") == 0)))))
    {
      printf("Deutschland indeed\n");

      libvlc_instance_t *player_instance;
      player_instance = libvlc_new(0, NULL);
      libvlc_media_t *soundfile;
      libvlc_media_player_t *player;
      soundfile = libvlc_media_new_path(player_instance, "snd/snd2.mp3");
      player = libvlc_media_player_new_from_media(soundfile);
      libvlc_media_player_play(player);
      sleep(9);
      libvlc_media_release(soundfile);
      libvlc_media_player_release(player);
      libvlc_release(player_instance);

    }

  else if (strcmp(waifu,"toujou_koneko") == 0 ||
           (strcmp(waifu,"komekko") == 0 ||
            (strcmp(waifu,"melty_melromarc") == 0 ||
             (strcmp(waifu,"kana_kobayashi") == 0 ))))
    {
      printf("Bruh, what?\n");

      libvlc_instance_t *player_instance;
      player_instance = libvlc_new(0, NULL);
      libvlc_media_t *soundfile;
      libvlc_media_player_t *player;
      soundfile = libvlc_media_new_path(player_instance, "snd/snd1.mp3");
      player = libvlc_media_player_new_from_media(soundfile);
      libvlc_media_player_play(player);
      sleep(2);
      libvlc_media_release(soundfile);
      libvlc_media_player_release(player);
      libvlc_release(player_instance);
    }

 else if (strcmp(waifu, "giorno") == 0)
    {
      printf("GOLDEN WIND\n");

      libvlc_instance_t *player_instance;
      player_instance = libvlc_new(0, NULL);
      libvlc_media_t *soundfile;
      libvlc_media_player_t *player;
      soundfile = libvlc_media_new_path(player_instance, "snd/snd3.mp3");
      player = libvlc_media_player_new_from_media(soundfile);
      libvlc_media_player_play(player);
      sleep(60);
      libvlc_media_release(soundfile);
      libvlc_media_player_release(player);
      libvlc_release(player_instance);
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
    FILE *fptr;
    char c;
    char file[] = "ascii/zero_two";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Darling in the FranXX\n");
  }
  else if (strcmp(waifu,"lucoa") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/lucoa";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF){

      printf("%c", c);
      c = fgetc(fptr);
    }
    printf("Anime:Miss Kobayashi's Dragon Maid\n");
  }
  else if (strcmp(waifu,"marin_kitagawa") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/marin";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:My dress up darling\n");
  }
  else if (strcmp(waifu,"astolfo") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/astolfo";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
      printf("%c", c);
      c = fgetc(fptr);
      }
    printf("Anime:Fate\n");
  }
  else if (strcmp(waifu,"raphtalia") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/raphtalia";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:The Rising of The Shield Hero\n");
  }
  else if (strcmp(waifu,"himiko_toga") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/toga";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:My Hero Academia\n");
  }
  else if (strcmp(waifu,"albedo") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/albedo";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Overlord\n");
  }
  else if (strcmp(waifu,"darkness") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/darkness";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
   printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"megumin") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/megumin";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"horo") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/horo";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Spice and Wolf\n");
  }
  else if (strcmp(waifu,"wiz") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/wiz";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"aqua") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/aqua";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"gabi_braun") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/gabi";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Attack on Titan\n");
  }

  else if (strcmp(waifu,"malty_melromarc") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/malty";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:The Rising of The Shield Hero\n");
  }
  else if (strcmp(waifu,"ichigo") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/ichigo";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Darling in the FranXX\n");
  }
  else if (strcmp(waifu,"shouko_komi") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/komi";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Komi can't communicate\n");
  }
  else if (strcmp(waifu,"speedwagon") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/speedwagon";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:JoJo\n");
  }
  else if (strcmp(waifu,"yu_ishigami") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/ishigami";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);

      }
    printf("Anime:Love is War\n");
  }
  else if (strcmp(waifu,"dio_brando") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/dio";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:JoJo\n");
  }
  else if (strcmp(waifu,"bismarck") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/bismarck";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"prinz_eugen") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/eugen";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"elbe") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/elbe";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"friedrich") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/friedrich";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"selphius") == 0){
    FILE *fptr;
    char c;
    char file[] = "ascii/selphius";
    fptr = fopen(file, "r");
    c = fgetc(fptr);
    while (c != EOF)
      {
        printf("%c", c);
        c = fgetc(fptr);
      }
    printf("Anime:none(real life)\n");
  }
 else if (strcmp(waifu,"toujou_koneko") == 0){
   FILE *fptr;
   char c;
   char file[] = "ascii/koneko";
   fptr = fopen(file, "r");
   c = fgetc(fptr);
   while (c != EOF)
     {
       printf("%c", c);
       c = fgetc(fptr);
     }
   printf("Anime:High School DxD\n");
 }
   else if (strcmp(waifu,"komekko") == 0){
     FILE *fptr;
     char c;
     char file[] = "ascii/komekko";
     fptr = fopen(file, "r");
     c = fgetc(fptr);
     while (c != EOF)
       {
         printf("%c", c);
         c = fgetc(fptr);
       }
     printf("Anime:KonoSuba\n");
   }
   else if (strcmp(waifu,"melty_melromarc") == 0){
     FILE *fptr;
     char c;
     char file[] = "ascii/melty";
     fptr = fopen(file, "r");
     c = fgetc(fptr);
     while (c != EOF)
       {
         printf("%c", c);
         c = fgetc(fptr);
       }
     printf("Anime:The Rising of The Shield Hero\n");
   }
   else if (strcmp(waifu,"kana_kobayashi") == 0){
     FILE *fptr;
     char c;
     char file[] = "ascii/kana";
     fptr = fopen(file, "r");
     c = fgetc(fptr);
     while (c != EOF)
       {
         printf("%c", c);
         c = fgetc(fptr);
       }
     printf("Anime:Miss Kobayashi's Dragon Maid\n");
   }
   else if (strcmp(waifu,"giorno") == 0){
     FILE *fptr;
     char c;
     char file[] = "ascii/giorno";
     fptr = fopen(file, "r");
     c = fgetc(fptr);
     while (c != EOF)
       {
         printf("%c", c);
         c = fgetc(fptr);
       }
     printf("Anime:JoJo");
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
