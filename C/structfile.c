#include<stdio.h>
struct record
{
  char name[20];
  int roll_no;
}s;

void main()
 {
		 FILE *f;
		 FILE *f1;
		 char ch;
		 int n;
		// f=fopen(filestruct.c,"r");
		f = fopen("structfile1","w");
		//f1=fopen("result","a");
		  
		for(j = 0;j < 5; j++)
		 {
		 	fscanf("stdin","%d",&s.roll_no);
			fscanf("stdin","%s",&s.name);
			fwrite(&s,sizeof(s),1,f);
		 }
		 fclose(f);
		 f = fopen("structfile1","r");

		 printf("enter entry");
		 scanf("%d", &n);
		fseek(f,(n-1) *sizeof(s[i]),0);
		fread(&s,sizeof(s),1,f);
		printf("%d",s.roll_no);
		printf("%s",s.name);
 }
      
     
   


 
    
         
         
      
     
