import java.io.*;
import java.lang.*;
import java.util.*;;

class breakasgoto
{
  public static void main(String args[])
  {
    int i,j,k;
    first: for(i=0;i<10;i++)
    {  
      System.out.println("first loop  " +i);
      second : for(j=0;j<10;j++)
        {
          System.out.println("second loop  " +i+j);
         third : for(k=0;k<5;k++)
           {
             System.out.println("third loop  "+i+j+k);
            if(k==2)
            break first;
            }
          }
      }
    }
  }              
