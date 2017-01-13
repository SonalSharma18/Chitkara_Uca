#include<stdio.h>
void main()
{

	 printf("size of integer : %lu \n",sizeof(int));
	 printf("size of character : %lu \n" ,sizeof(char));
	 printf("size of float : %lu \n", sizeof(float));
	 printf("size of double : %lu \n", sizeof(double));
	 printf("size of long int : %ld \n", sizeof(long int));
	 printf("size of long double : %lu \n", sizeof(long double));
	 printf("size of long long int : %lu \n", sizeof(long long int));
	 printf("size of integer constant : %lu \n", sizeof(12));
	 printf("size of float constant : %lu \n" , sizeof(2.7));


}
