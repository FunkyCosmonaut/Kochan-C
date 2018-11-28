#include <stdio.h>

void substring(char source[], int start, int count, char result[]){

  int j = 0;
  int i;
  for(i = start; i < count; i++){
      result[j] = source[i];
      j++;
    }
    result[j] = '\0';
}

int main(void){

  char final[20];
  void substring(char source[], int start, int  count, char result[]);

  substring("Myassyourface", 5, 20, final);
  printf("%s", final);
}
