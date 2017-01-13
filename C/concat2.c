#include<stdio.h>
#include<string.h>
void main()
 {
   char str1[100] = {0}, str2[100] = {0};
   int l, l1, i, j;
   printf("enter first string");
   gets(str1);
   printf("enter second string");
   gets(str2);
   l = strlen(str1);
   l1 = strlen(str2); 
   for(i = l,j = 0; i < l+l1 && j<l1; i++, j++)
    {
      str1[i] = str2[j];
    }
 puts(str1);
}
