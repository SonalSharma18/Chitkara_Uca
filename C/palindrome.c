#include<stdio.h>
#include<math.h>
void main()
{
  	int n , m, r, s = 0, p;
    printf("enter num");
    scanf("%d", &n);
    m = n;
  while(m!=0)
  {
	 r = m%10;
	 s = s*10+r;
	 m = m/10;
  }
  if(n == s)
	
   printf("number is palindrome\n");
   else
   printf("number is not palindrome\n");
        
}
	
