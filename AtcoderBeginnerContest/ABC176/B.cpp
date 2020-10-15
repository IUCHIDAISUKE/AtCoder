#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[2000001];
    int i, len, sum;

    scanf("%s", s);
    len = strlen(s);
    i = 0;
    sum = 0;
    while (i < len)
    {
        sum += (s[i] - '0');
        i++;
    }
    if (sum % 9 == 0)
    {
        puts("Yes");
    }
    else
    {
        puts("No");
    }
}
