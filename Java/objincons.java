import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  int a,b;
  
  abc()
  {
    a=0;
    b=0;
  }
  
  abc(int c,int d)
  {
    a=c;
    b=d;
  }
  
  abc(abc t)
  {
    a=t.a;
    b=t.b;
  }  
  
  void disp()
  {
     System.out.println(a+" "+b);
    }
  }
  
   class objincons
      {
         public static void main(String args[])
         {
             abc obj=new abc(1,2);
             abc obj1=new abc(3,4);
             abc obj2=new abc(obj);
             
             obj.disp();
             obj1.disp();
             obj2.disp();
          }
        }     
