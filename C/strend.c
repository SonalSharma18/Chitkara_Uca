#include <stdio.h>

int strend1(char* s1, char* s2)
{
    int l1 = 0, l2 = 0;
    while(*s1++)
    l1++;
    while(*s2++ && ++l2);

    while((*(--s1) == *(--s2)) && --l2 && --l1);
    return l2 == 0 ? 1 : 0;
}

int main()
{
    char str[]="hello";
    char str2[] = "li";
    int res = strend1(str, str2);
    printf("%d\n", res);
}
