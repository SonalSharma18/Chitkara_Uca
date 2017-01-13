#include <stdio.h>

void strncpy1(char* s1, char* s2, int n)
{
    while((*s1++ = *s2++) && (n--));
    *(--s1) = '\0';
}

int main()
{
    char str1[20] = "abcefgs";
    char str2[] = "world";
    strncpy1(str1, str2, 3);
    printf("%s\n", str1);
}
