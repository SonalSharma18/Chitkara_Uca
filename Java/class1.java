import java.io.*;
import java.lang.*;
import java.util.*;

class abc
{
  int a;
  int b;
  int c;
  int v;
  abc vol()
   {
     abc t=new abc();
    // int v;
     t.v=a*b*c;
     return t;
    
}

}

class class1
 {
   public static void main(String args[])
   {
     abc obj=new abc();
     abc obj1=new abc();
     abc d=new abc();
     abc e=new abc();
    // int d,e;
     
     obj.a=1;
     obj.b=2;
     obj.c=3;
       
       
     obj1.a=2;
     obj1.b=2;
     obj1.c=2;
     
     d=obj.vol();
     e=obj1.vol();
     
     System.out.println("ans is "+d.v);
     System.out.println("ans is "+e.v);
     
   }
 }        
