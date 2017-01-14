import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  int a,b;
  void test()
  {
    System.out.println(a+" "+b);
   // System.out.println(b+" ");
  }
  
  void test(int c)
  {
    a=c;
    System.out.println(a);
  }
  
 }
 
 class methodover
 {
   public static void main(String agrs[])
   {
     abc obj=new abc();
     obj.a=10;
     obj.b=20;
     obj.test();
     obj.test(4);
     }
    } 
     
        
