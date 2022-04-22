#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    scanf("%s",str);
    int ans=0;
    for(int i=0;i<strlen(str);i++)
    {
        ans*=26;
        ans+=str[i]-'A'+1;
    }
printf("%d",ans);
    return 0;
}

OUTPUT
ZZZZZ
12356630

AB
28
