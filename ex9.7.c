#include <stdio.h>

void insertString(char string1[], char toappend[], int pos)
{
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



int main(void){

  void insertString(char string1[], char toappend[], int pos);
  char teststring[50] = "ALL NIGHT LOONG(ALL NIGHT)";

  insertString(teststring, " mydick ", 8);

  printf("%s", teststring);
}
