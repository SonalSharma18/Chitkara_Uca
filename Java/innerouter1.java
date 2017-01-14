//Mai may object outer class ka he banega ...inner class k functions k liye outer class may objects banaenge inner class k and uss se unhe call krengge
import java.io.*;
import java.util.*;
import java.lang.*;

class abc
{
  int a,b;
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
  
  
  void cal()
  {abc1 obj=new abc1();
  obj.disp();
    int s=a+b;
     System.out.println("ans in outer class "+s);
   }  
  class abc1
  {
    void disp()
    {
      System.out.println("inner class");
       System.out.println(a+" "+b);  
    }
     
   }
  }
  
  class innerouter1
  {
    public static void main(String args[])
    {
      abc obj1=new abc(2);
     // obj1.disp();
      obj1.cal();
    }
  }            
