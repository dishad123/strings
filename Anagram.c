#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    scanf("%s",str1);
    char str2[20];
    scanf("%s",str2);
    int count[26]={0};
    for(int i=0;i<strlen(str1);i++)
    {
        count[str1[i]-97]++;
    }
for(int i=0;i<strlen(str2);i++)
    {
        count[str1[i]-97]-=1;
        if(count[str1[i]-97]<0)
        {
            printf("Not an anagram");
            break;
        }
    }
    int i;
    if(str2[i]=='\0')
    {
        printf("An anagram");
    }
    return 0;
}

INPUT:
1. medical
  decimal
  anagram
2. medical
deeimal
not an anagram
