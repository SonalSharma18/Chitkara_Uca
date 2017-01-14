import java.io.*;
import java.lang.*;
import java.util.*;

class exceptionhandling1
{
  public static void main(String args[])
  {
     int d,a;
    try{
         d=0;
         a=42/d;
         System.out.println("this will not b printed");
         }
         catch(ArithmeticException e)
         {
           System.out.println("error caught");
         }
          System.out.println("try catch ended");
  }
}    
