#include <stdio.h>

void readLine(char *ptr){

  do {
    *ptr = getchar();
    ++ptr;
    if(getchar() == '\n')
      break;

  } while(getchar() != EOF);
}

int main(void){

  void readLine(char *ptr);
  char derka[80];
  char *derkaptr = derka;

  readLine(derka);

  printf("%s\n", derka);
}
