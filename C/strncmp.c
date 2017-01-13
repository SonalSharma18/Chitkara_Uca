#include <stdio.h>

int strncmp1(char* s1, char* s2, int n)
{
    while((!(*s1++ - *s2++)) && n--);
    
}

int main()
{
    char str1[] = "hello";
    char str2[] = "habc";
    printf("%d\n", strncmp1(str1, str2, 2));
}
