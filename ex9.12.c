#include <stdio.h>

int strToInt(const char string[])
{

  int intValue, result = 0;
  int i = 0;
  int negcount = 0;

  if(string[i] == '-'){
    ++i;
    negcount = 1;
  }

  for(i; string[i] >= '0' && string[i] <= '9'; ++i)
  {
    intValue = string[i] - '0';
    result = result * 10 + intValue;

  }
  if(negcount == 1)
    result = result * -1;

  return result;
}

int main(void){

  int strToInt(const char string[]);

  printf("%i\n", strToInt("-245"));
  printf("%i\n", strToInt("100") + 25);
  printf("%i\n", strToInt("13x5"));

  return 0;

}
