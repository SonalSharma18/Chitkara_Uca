import java.io.*;
import java.lang.*;
import java.util.*;
class switch2
{
  int ch;
   switch2()
   {
     ch=0;
     }
     switch2(int a)
     {
       ch=a;
       }
     void cal()
     {
       switch(ch)
       {
         case 1: System.out.println("cse1");
                 break;
          case 2: System.out.println("cse2");
                  break;
           case 3: System.out.println("cse3");
                  break;
            default:  System.out.println("sonal");                  
        }
       }
     }   
 
 
 class switch1
 {
   public static void main(String args[])
   {
      switch2 obj=new switch2(3);
      obj.cal();
    }
    }  
