#include <stdio.h>

int findString(char strtosrch[], char strtolkfr[]){

  int i = 0;
  int j = 0;
  int counter = 0;

  while(strtosrch[i] != '\0')
  {
    ++i;
    while((strtosrch[i] == strtolkfr[j]) && (strtolkfr[j] != '\0')){
      ++j;
      if(strtolkfr[j] == '\0')
        counter = i - j;
    }
  }
  if(counter == 0)
    return -1;
  else
    return counter;
}

int main(void){

  int where;
  int findString(char strtosrch[], char strtolkfr[]);
  where = findString("Maryhadalittlelamb","dal");

  printf("located in index %i", where);
}
