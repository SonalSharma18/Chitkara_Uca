import java.io.*;
import java.lang.*;
import java.util.*;

class abc

  {
   int a,b,c;
   
   abc()
   {
    a=0;
    b=0;
    c=0;
   }
   
   
   abc(int a,int b,int c)
   {
     this.a=a;
     this.b=b;
     this.c=c;
   }
   
   void vol()
   {
     int v= a*b*c;
     System.out.println("ans is "+v);
    }
    
    protected void finalize()
    {
     System.out.println("object about to die");
     }
       }
   
   class finalize1
   {
     public static void main(String args[])
     {
       abc obj=new abc(1,2,3);
       obj.vol();
       //obj.finalize();
       
     }
   }    
            
