import java.io.*;
import java.util.*;
import java.lang.*;

class abc

{
   int a,b,s=0;
    abc()
    {
      a=0;
      b=0;
     }
     
     abc(int c)
     {
      a=c;
      b=c;
    }
    
    abc disp()
    {
        abc temp=new abc();
       temp.s=a+b;
       return temp;
    }
    
    }
    
    class returnobj
    {
       public static void main(String args[])
       {
         abc obj=new abc(2);
         abc obj1=new abc();
         obj1=obj.disp();
          System.out.println("ans is " + obj1.s);
        }
      }    
     
