import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  int l1,l2;
  
  abc()
  {
    l1=0;l2=0;
  }
  abc(int a ,int b)  
  {
    l1=a;
    l2=b;
  }
  
  void area()
  {
    int a=l1*l2;
    System.out.println("area is "+a);
  }
 }
 
 class abc1 extends abc
 {
   
   abc1()
   {
     super();
    }
    
   abc1(int c,int d)
   {
     super(c,d);
   }
   void area()
  {
    int a=l1*l2;
    System.out.println("area is "+a);
  }
 }
 
 class dynamicdispatch1
 {
   public static void main(String args[])
   {
     abc obj=new abc(1,2);
     abc1 obj1=new abc1(2,4);
     
     abc r;
     r=obj;
     r.area();
     
     r=obj1;
     r.area();
   }
 }    
          
