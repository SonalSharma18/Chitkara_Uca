#include<stdio.h>
void main()
{
 	printf("%10d \n", 12);
 	printf("%-10d \n", 12);
 	printf("%10.3d \n", 12);
 	printf("%-10.3d \n", 12);
 	printf("%10.3d \n", 12345);
 	printf("%-10.3d \n", 12345);
 	printf("%10.6f \n", 12.3456);
 	printf("%-10.6f \n", 12.3456);
 	printf("%10c \n", 's');
 	printf("%-10c \n", 's');
 	printf("%#x \n", 12);
 	printf("%#o \n", 12);
 	printf("%10f \n", 12.3456);
 	printf("%10.0f \n", 12.3456);
 	printf("%10.3s \n", "hello");
}
