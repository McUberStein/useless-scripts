#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <vlc/vlc.h>


char waifu[10];

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



  if (strcmp(waifu,"wiz") == 0 ||
      (strcmp(waifu,"albedo") == 0 ||
            (strcmp(waifu,"megumin") == 0 ||
            (strcmp(waifu,"horo") == 0))))
    {
     printf("You are cultured\n");

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
     libvlc_release(player_instance);*/
    }

  else if (strcmp(waifu,"gabi") == 0 ||
           (strcmp(waifu,"malty") == 0 ||
            (strcmp(waifu,"ichigo") == 0)))
            {
              printf("You fucking donut\n");

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

  else if (strcmp(waifu,"komi") == 0 ||
      (strcmp(waifu,"speedwagon") == 0 ||
            (strcmp(waifu,"ishigami") == 0 ||
            (strcmp(waifu,"dio") == 0))))
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
           (strcmp(waifu,"eugen") == 0 ||
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

  else{
    printf("%s is not on the list\nPlease try again\n", waifu);
    return 1;
  }



  return 0;
}




int main() {

  checkPoint:
  printf("\nWho is your waifu? ");
  scanf ("%s", waifu);
  judgeChoice();
  goto checkPoint;

  return 0;
}
