import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  int i;
   
   abc()
   {
     i=0;
   }
   abc(int a)
   {
     i=a;
   }
   
   void disp()
   {
     System.out.println("value of i is "+ i);
   }
  }
  
  class abc1 extends abc
  {
     int i;
      abc1()
      {
        super.i=0;
        i=0;
       }
       
       abc1(int c,int d)
       {
             super .i=c;
             i=d;
         }
         
         void disp()
         {
          // super.disp();
                
       System.out.println("value of i is "+ i);
   }
  }
  
  class inheritancensuper
  {
    public static void main(String args[])
      {
        abc1 obj=new abc1(1,2);
        abc obj1=new abc(1);
        obj.disp();
        obj1.disp();
      }
    }    
   
