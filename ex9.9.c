#include <stdio.h>

void replaceString(char source[], char s1[], char s2[]){

  void insertString(char string1[], char toappend[], int pos);
  void removeString(char sourcestr[],int firstnm, int secnm);
  int findString(char strtosrch[], char strtolkfr[]);

  int i;

  i = findString(source, s1);
  removeString(source, i, i+4);
  insertString(source, s2, i);
}

int main(void){

  char samplearray[50] = "gotan dstiffy";
  char samplearray2[20]= "sti";
  char samplearray3[20]= "derp";

  replaceString(samplearray, samplearray2, samplearray3);

  printf("%s", samplearray);

  return 0;
}






//OLD FUNCTIONS USED FOR THE NEW PROGRAM
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void insertString(char string1[], char toappend[], int pos){
  int i;
  int j = 0;
  int tempstr[50];

  for (i = pos; string1[i] != '\0'; ++i){
      tempstr[j] = string1[i];
      ++j;
    }
       tempstr[j] = '\0';
       j = 0;

  for(i = pos; toappend[j] != '\0'; ++i){
      string1[i] = toappend[j];
      j++;
    }

    j=0;

  for(i ; tempstr[j] != '\0'; i++){
    string1[i] = tempstr[j];
    j++;
  }
  string1[i] = '\0';
}
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
        counter = i - j + 1;
    }
  }
  if(counter == 0)
    return -1;
  else
    return counter;
}
