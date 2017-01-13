#include <stdio.h>
#include<string.h>
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[100]={0},sub[100]={0};
    int i=0,j,k,l,l1,t,c,f;
    gets(str);
    l=strlen(str);
    gets(sub);
    l1=strlen(sub);
    while(str[i]!='\0')
        {
        j=0;
            c=0;
        if(str[i]==sub[0])
            {
            k=i;
            while(sub[j]!='\0')
                {
                for(t=k;t<=l;t++)
                    {
                    if(sub[j]==str[t])
                        {
                        c++;
                        k=t+1;
                        j++;
                        f=1;
                    }
                    else
                        {f=0;
                        break;
                }
            }
        }
    }
        else 
            i++;
    }
    if(c==l1)
        printf("1");
    else
        printf("0");
    
return 0;
}
