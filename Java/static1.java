//static variable-->static block-->static main()-->further functions
//if the function is non-static then it can use static variables...but if the function is static it cannot use non-static variables
//static variables and functions are called by class not objects.
//non-static are called by objects
import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  static int a=3;
  static int b;
  
   void disp()
  {
    System.out.println(a);
    System.out.println(b);
  }
  
  static
  {
    System.out.println("static begins");
    b=a*4;
  }
 }
 
 class static1
 {
   public static void main(String args[])
   {
     abc obj=new abc();
     obj.disp();
   }
  }        
