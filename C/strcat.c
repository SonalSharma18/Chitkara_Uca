#include <stdio.h>

void cat(char* s1, char* s2)
{
    while(*s1++);
    *s1--;
    while(*s1++ = *s2++);
}

int main()
{
    char str1[20] = "hello";
    char str2[10] = "world";
    cat(str1,str2);
    printf("%s\n",str1);
}
