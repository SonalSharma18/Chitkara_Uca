#include <stdio.h>

void strncat1(char* s1, char* s2, int n)
{
    while(*s1++);
    s1--;
    while((*s1++ = *s2++) && (n--));
   *(--s1) = '\0';
}

int main()
{
   char str1[20] = "hello";
   char str2[] = "world";
   strncat1(str1, str2, 2);
   printf("%s\n",str1);
}
