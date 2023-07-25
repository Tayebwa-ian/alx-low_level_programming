#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Generate random valid password
 *Results: 0
 */
int main(void)
{
  int i, randomizer;
  
  /* a string of numbers */
  char numbers[] = "0123456789";

  /* string of lowercase letters */
  char letter[] = "abcdefghijklmnoqprstuvwyzx";

  /* string uppercase letters */
  char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

  /* string of special characters */
  char symbols[] = "!@#$^&*?";
  
  /* password to create */
  char password[10];

  /*Seed the random number generator */
  srand((unsigned int)(time(NULL)));

  randomizer = rand() % 4;

  for (i = 0; i < 10; i++)
    {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            randomizer = rand() % 4;
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
        }
    }
  printf("%s\n", password);
  return (0);
}
