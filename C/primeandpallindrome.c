#include<stdio.h>
void prime(int);
void pallindrome(int);
void main()
{
 	int i;
 	for(i = 10; i <= 1000; i++)
 	{
     	prime(i);

 	}
}

  
void prime(int j)
{
    int i, l, c = 0, k;
    for(l = 2; l < j; l++)
    {
       if(j%l == 0)
       {
            c++;
			break;
	   }
    }
	if(c == 0)

 	pallindrome(j);

}
   
   
void pallindrome(int k)
{
      int r, n, rev = 0;
      n = k;
      while(n != 0)
      {
            r = n%10;
            rev = rev*10+r;
            n = n/10;
      }
      if(rev == k)
   	  {
     	
		  printf("%d\n",k);
   	  }
	
}
      

