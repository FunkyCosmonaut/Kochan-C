#include <stdio.h>
#include <stdbool.h>

struct entry
{
  char word[15];
  char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
  int i = 0, answer;

  while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
      ++i;

  if(s1[i]<s2[i])
    answer = -1;
  else if(s1[i] == s2[i])
    answer = 0;
  else
    answer = 1;

    return answer;
}

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compareStrings(const char s1[], const char s2[]);

  while(low <= high)
  {
    mid = (low + high)/2;
    result = compareStrings(dictionary[mid].word, search);

    if(result == -1)
        low = mid + 1;
    else if(result == 1)
        high = mid - 1;
    else
        return mid;
      }

        return -1;

}

void dictionarySort(struct entry dictionary[], const int entries){

  struct entry temp[1];
  int compareStrings(const char s1[], const char s2[]);
  int i = 0;
  int check = 2;

  while(check != -1){

    check = compareStrings(dictionary[i].word,dictionary[i+1].word);

    temp[0].word = dictionary[i].word;
    temp[0].definition = dictionary[i].definition;
    dictionary[i].word = dictionary[i+1].word;
    dictionary[i].definition = dictionary[i+1].definition;
    dictionary[i+1].word = temp[0].word;
    dictionary[i+1].definition = temp[0].definition;
    i++;

  }
}
int main(void)
{
  struct entry dictionary[100]=
  { {"aardvark", "a burrowing AFrican mammal"        },
    {"abyss",    "a bottomless pit"                  },
    {"acumen",   "mentally sharp; keen"              },
    {"addle",    "to become confused"                },
    {"aerie",    "a high neat"                       },
    {"affix",    "to append; attach"                 },
    {"agar",     "a jelly made from seaweed"         },
    {"ahoy",     "a nautical call of greeting"       },
    {"aigrette", "an ornamental cluster of feathers" },
    {"ajar",     "partially opened"                  }  };

    char word[10];
    int entries = 10;
    int entry;
    int i;
    int lookup(const struct entry dictionary[], const char search[], const int entries);

    for(i = 0; i < entries; i++)
      printf("%s  :   %s\n", dictionary[i].word, dictionary[i].definition);

    return 0;
}
