import java.io.*;
import java.lang.*;
import java.util.*;
class box
{
   int w,l,b;
   
   void volume()
   {
     int vol=w*l*b;
     System.out.println("volume is : "+vol);
  }
  
 }
   	
 class prog
 {
 public static void main(String args[])
 {
   box obj1=new box();
   obj1.w=10;
   obj1.l=10;
   obj1.b=10;
   
   obj1.volume();
   }
   }
