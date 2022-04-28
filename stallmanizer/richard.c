#include <stdio.h>


int main() {

  char word[30];
  char word2[30];
  
  
  printf("What you're reffering to as... : ");
  scanf("%s", word);
  
  printf("Is actually .../%s : ", word);
  scanf("%s", word2);
  
  printf("\n I'd just like to interject for a moment. What you're refering to as %s, is in fact, %s/%s, or as I've recently taken to calling it, %s plus %s. %s is not an operating system unto itself, but rather another free component of a fully functioning %s system made useful by the %s corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX. \n \n There really is a %s, and these people are using it, but it is just a part of the system they use. %s is the kernel: the program in the system that allocates the machine's resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. %s is normally used in combination with the %s operating system: the whole system is basically %s with %s added, or %s/%s. All the so-called %s distributions are really distributions of %s/%s! \n", word, word2, word, word2, word, word, word2, word2, word, word, word, word2, word2, word, word2, word, word, word2, word);

  return 0;

}
  
