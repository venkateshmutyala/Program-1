#include "tools.h"

int main(void) {
  char characters[26];
  int counter = 0;
  int flag = 0;

  printf("abcdefghijkl\n");
  printf("Venkatesh Mutyala\n");
  printf("\n");

  char user_input;
  for(int i = 0; i < 26; i++) {
    scanf(" %c", &user_input);

    if(user_input == '#')
    {
      break;
    }

    if(isalpha(user_input))
    {
      user_input = tolower(user_input);

      for(int j = 0; j < i; j++)
      {
        if(characters[j] == user_input)
        {
           flag = 1;
           break;
        }
      }

      if(flag == 0)
      {
        characters[i] = user_input;
        counter++;
      }
      else {
        flag = 0;
        i--;
        continue;
      }
      
    }
    else {
      i--;
      continue;
    }

  }


  for(int i = 0; i < counter; i++)
  {
    printf("%c ", characters[i]);
  }
  return 0;
}