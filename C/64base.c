#include<stdio.h>
#include<stdlib.h>
unsigned char charset[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};

unsigned change(char ch)
{
	
	if (ch >= 'A' && ch <= 'Z')
 
    ch -= 'A';
  
 	else if (ch >= 'a' && ch <='z')
      
	ch = ch - 'a' + 26;
   
	else if (ch >= '0' && ch <='9')
  
    ch = ch - '0' + 52;
  
	else if (ch == '+')
      
	ch = 62;
  
 	else if (ch == '/')
     
 	ch = 63;
  
 	return(ch);

}

void encode(unsigned char output[], unsigned char input[], int len, int flag)
{
	int i, j, blk, left;
	blk =(len/3) * 3;
	for( i = 0, j = 0; i < blk; i = i + 3, j = j + 4)
	{
		output[j] = charset[input[i] >> 2];
		output[j+1] = charset[((input[i] & 0x03) << 4) + (input[i+1] >> 4)];
		output[j+2] = charset[((input[i+1] & 0x0f) << 2) + (input[i+2] >> 6)]; 
		output[j+3] = charset[input[i+2] & 0x3F];
		if(!(j % 77) && flag)
		{
			output[j + 4] = '\n';
			j++;
		}
	}
	
	left = len % 3;
		
	if(left == 1)
	{
		output[j] = charset[input[i] >> 2];
		output[j+1] = charset[(input[i] & 0x03 ) << 4];
		output[j+2] = '=';
		output[j+3] = '=';
		j = j+4;
	}
    else if (left == 2)
    {

       output[j] = charset[input[i] >> 2];

       output[j+1] = charset[((input[i] & 0x03) << 4) + (input[i+1] >> 4)];
  
       output[j+2] = charset[(input[i+1] & 0x0f) << 2];
 
       output[j+3] = '=';

       j += 4;

    }
   
   output[j] ='\0';
   puts(output);
}	
   
   
   
   
void decode(unsigned char in[], unsigned char out[], int len)

{
    unsigned char ch;
  
    int idx,idx2,blks,left_over;


    if (in[len-1] == '=')
  
    len--;
   
    if (in[len-1] == '=')
 
     len--;

  
    blks = (len / 4) * 4;
   
	for (idx=0,idx2=0; idx2 < blks; idx += 3,idx2 += 4)
 	{
     
 		out[idx] = (change(in[idx2]) << 2) + ((change(in[idx2+1]) & 0x30) >> 4);
     
 	    out[idx+1] = (change(in[idx2+1]) << 4) + (change(in[idx2+2]) >> 2);
   
        out[idx+2] = (change(in[idx2+2]) << 6) + change(in[idx2+3]);
 

    }

    left_over = len % 4;

    if (left_over == 2)

    {
      

    	out[idx] = (change(in[idx2]) << 2) + ((change(in[idx2+1]) & 0x30) >> 4);
      
    	out[idx+1] = (change(in[idx2+1]) << 4);
     
    	idx += 2;
   
    }
  
 	else if (left_over == 3)
 	{
  
    	out[idx] = (change(in[idx2]) << 2) + ((change(in[idx2+1]) & 0x30) >> 4);
   
    	out[idx+1] = (change(in[idx2+1]) << 4) + (change(in[idx2+2]) >> 2);
     
    	out[idx+2] = change(in[idx2+2]) << 6;
    	idx += 3;
   
   }
   
	out[idx] = '\0';
 
  //return(idx);
  	puts(out);

} 
				
int main()
{
	unsigned char a[1000];
	unsigned char b[1000];
	unsigned char c[1000];
	unsigned char d[1000];
	int l, l1, f=1 ;
	
	gets(a);
	l = strlen(a);
	encode(b,a,l,f);
	gets(c);
	l1= strlen(c);
	decode(d, c, l1); 
	return 0;
}	
	
