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
 
 abc(int a,int b)
 {
  this.a=a;
  this.b=b;
}

 void ye(abc obj)
 {
   if(obj.a==a && obj.b==b)
    System.out.println("equal");
    else
    System.out.println("not equal");
  }
 }
 
 class objmethod
 {
   public static void main(String args[])
   {
     abc obj=new abc(1,2);
     abc obj1=new abc(1,2);
     abc obj2=new abc(3,4);
     obj.ye(obj1);
     obj.ye(obj2);
   }
  }         
