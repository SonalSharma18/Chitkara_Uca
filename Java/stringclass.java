//values of static variables can b changed later on, irrspective of whether the function in which u are changing is static or not
import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  static String a="Sonal Sharma ";
  static String b="will rock one day";
  
  static void con()
  {
   // a="Sonal Sharma is the best,she ";
    String c=a.concat(b);
    System.out.println(c);
   }
   void and()
   {
     a="Sonal Sharma is the best,she ";
 }
} 
 
 class stringclass
 {
  public static void main(String args[])

{
   abc obj=new abc();
  obj.con();
  obj.and();
  obj.con();
 } 
 }    
