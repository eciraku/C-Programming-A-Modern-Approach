#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
  char message[100];
  int length = 0;

  printf("Enter message: ");
  for (int i = 0; i < 100; i++)
  {
    scanf("%c", &message[i]);

    if (message[i] == '\n')
      break;

    length++;
  }

  for (int j = 0; j < length; j++)
    message[j] = toupper(message[j]);

  printf("In B1FF speak: ");
  for (int k = 0; k < length; k++)
  {
    if (message[k] == 'A')
      printf("4");
    else if (message[k] == 'B')
      printf("8");
    else if (message[k] == 'E')
      printf("3");
    else if (message[k] == 'I')
      printf("1");
    else if (message[k] == 'O')
      printf("0");
    else if (message[k] == 'S')
      printf("5");
    else 
      printf("%c", message[k]);
  }

  printf("!!!!!!!!!!\n");
  
  return 0;
}