#include <stdio.h>

void removeString(char sourcestr[],int firstnm, int secnm){

  int i;
  int j;
  int tempstr[50];

  for(i = 0; i < firstnm; i++)
    tempstr[i] = sourcestr[i];
    j = i;
  for(i = secnm; sourcestr[i] != '\0'; ++i){
    tempstr[j] = sourcestr[i];
    ++j;
  }
  for(i = 0; tempstr[i] != '\0'; ++i)
    sourcestr[i] = tempstr[i];

    sourcestr[j] = '\0';
}

int main(void){

  char teststr[50] = "the wrong son";
  void removeString(char sourcestr[], int firstnm, int secnm);
  removeString(teststr, 3, 9);

  printf("%s", teststr);

}
