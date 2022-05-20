#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <vlc/vlc.h>
#include "judgment.h"


int match(char word[30], char arr[][60], int limit)
{
  int i;
  int stat = 69;
  for(i = 0; i < limit; i++)
    {
      if(strcmp(word, arr[i]) == 0 )
        {
          stat = 0;
          break;
        }
    }
  return stat;

}

/*This function checks if an array of strings contains a given string
 *It takes 3 arguments: the string to check for, the array and the number
 *of elements in that array
 */




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

/*Plays a media file with libvlc for a given amount of time and releases the player.
*Takes 2 arguments: the path of the file and the amount of time (in seconds) to play for.
*/




int check(char file[30])
{
  FILE *fptr;
  char path[30] = "ascii/";
  strncat(path, file, 30);
  fptr = fopen(path, "r");
  if (fptr == NULL)
    {
      return 1;
    }
  else {
    return 0;
  }
}

/*Checks if a file exists in the ascii folder, if not returns 1. Otherwise returns 0.
*Set in main() to return error if check return 1, to disable getting positives from characters that do no yet have ascii.
*/


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

/*Prints the contents of a file. Used to print ascii art.
*Requires the path of the file as an argument.
*/



int judgeChoice(void){


  if (match(waifu, cultured, 6) == 0)
    {
     printf("You are cultured\n");

     vlcPlay("snd/snd4.mp3", 4);
    }

  else if (match(waifu, good, 11) == 0)
    {
      printf("You have good taste\n");

      vlcPlay("snd/snd6.mp3", 3);
    }

  else if (match(waifu, bad, 3) == 0)
    {
      printf("You fucking donut\n");

      vlcPlay("snd/snd5.mp3", 1);
    }

  else if (match(waifu, god, 4) == 0)
    {
      printf("You are godlike\n");

    /*  vlcPlay(path, number);*/
   }

  else if (match(waifu, deutsch, 5) == 0)
    {
      printf("Deutschland indeed\n");

      vlcPlay("snd/snd2.mp3", 9);
    }

  else if (match(waifu, loli, 4) == 0)
    { printf("Bruh, what?\n");

      vlcPlay("snd/snd1.mp3", 2);
    }

  else if (strcmp(waifu, "giorno") == 0)
    {
      printf("GOLDEN WIND\n");

      vlcPlay("snd/snd3.mp3", 60);
    }

  else if(match(waifu, meh, 2) == 0)
    {
      printf("Meh... alright\n");

      vlcPlay("snd/snd7.mp3", 1);
    }

  else if(match(waifu, helltaker, 9) == 0)
    {
      printf("You have GREAT taste\n");

      vlcPlay("snd/snd8.mp3", 14);
    }

  else if(match(waifu, yes, 10) == 0)
    {
      printf("YES\n");

      vlcPlay("snd/snd9.mp3", 2);
    }

  return 0;
}

/*The main function of Judgment-C. Checks the 'waifu' variable and prints output and plays audio based on it.
*Does not take arguments.
*/



int getSauce(void) {
  if (match(waifu, ditf, 2) == 0){
    printf("Anime: Darling in the FranXX\n");
  }
  else if (match(waifu, kobayashi, 2) == 0){
    printf("Anime:Miss Kobayashi's Dragon Maid\n");
  }
  else if (strcmp(waifu,"marin_kitagawa") == 0){
    printf("Anime:My dress up darling\n");
  }
  else if (strcmp(waifu,"astolfo") == 0){
    printf("Anime:Fate\n");
  }
  else if (match(waifu, shield, 3) == 0){
    printf("Anime:The Rising of The Shield Hero\n");
  }
  else if (match(waifu, BNHA, 1) == 0){
    printf("Anime:My Hero Academia\n");
  }
  else if (match(waifu, overlord, 1) == 0){
    printf("Anime:Overlord\n");
  }
  else if (match(waifu, konosuba, 5) == 0){
   printf("Anime:KonoSuba\n");
  }
  else if (strcmp(waifu,"horo") == 0){
    printf("Anime:Spice and Wolf\n");
  }
  else if (match(waifu, aot, 1) == 0){
    printf("Anime:Attack on Titan\n");
  }
  else if (strcmp(waifu,"shouko_komi") == 0){
    printf("Anime:Komi can't communicate\n");
  }
  else if (match(waifu, jojo, 2) == 0){
    printf("Anime:JoJo\n");
  }
  else if (match(waifu, lovewar, 3) == 0){
    printf("Anime:Love is War\n");
  }
  else if (match(waifu, azur, 4) == 0){
    printf("Anime:Azur Lane\n");
  }
  else if (strcmp(waifu,"selphius") == 0){
    printf("Anime:none(real life)\n");
  }
  else if (match(waifu, highschool, 4) == 0){
    printf("Anime:High School DxD\n");
  }
  else if (match(waifu, rezero, 4) == 0){
    printf("Anime:Re:Zero\n");
  }
  else if(match(waifu, helltaker, 9) == 0){
    printf("Anime:Helltaker(game)\n");
  }
  else if(match(waifu, nekopara, 6) == 0){
    printf("Anime:Nekopara\n");
  }
  else if(strcmp(waifu, "midari_ikishima") == 0){
    printf("Anime:Kakegurui\n");
  }

  return 0;
}


/*Prints the name of the anime that the character is from
 *No arguments.
 */
