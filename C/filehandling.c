#include<stdio.h>
void main()
{
  	int a;
    FILE *f;
  	f = fopen("factorial", "r");
  	fscanf(f,"%d", &a);
  	fprintf(stdout,"%d", a);
  
}
