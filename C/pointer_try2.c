#include<stdio.h>
void main()
  {
     int a[] = {0, 1, 2, 3, 4};
     int *p, i;
     for(p = a+4; p >= a; p--)
      {
        	printf("%d", a[*p]);
      }
}
