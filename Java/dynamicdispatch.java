//dynamic dispatch works only with overrided methods
import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
 int a;
  
  void disp()
  {
    //int a=10;
    System.out.println(a);
  }
 }
 
 
 class abc1 extends abc
{
  
  int b;
  void disp()
  {
    //int b=20;
    System.out.println(b);
  }
  void lol()
  {
    System.out.println("Sonal");
    }
 }
 
    class dynamicdispatch
    {
       public static void main(String args[])
       {
         abc obj=new abc();
         abc1 obj1=new abc1();
         
         abc r;
         
         r=obj;
        r.a=10;
         r.disp();
         
        /* r=obj1;
           r.lol();*/    //wont work bcz aise agar reference variable superclass ka hai ...so wo sublass ki jo overrided functiuons hai srf un per work kr skta bakio pe nai, n apni class k baki functions pe b work kr skta hai...agarhume subclass k baki functions ko cl=al krna hai toh hume un k liye alga se uss subclass type ka reference variable banana padega n then uss may subclaa ka object assign kr k cl kr lenge
         
        r=obj1;
         r.a=20;
         r.disp();
         
         abc1 r1;
         
         r1=obj1;
         r1.b=20;
         r1.disp();
         r1.lol();
       }  
         
         
       }
     
