import java.io.*;
import java.lang.*;
import java.util.*;

abstract class abc
{
	 int a,b,area;
	 abc()
	 {
	  a=0;
	  b=0;
	 }
	 
	 abc(int a,int b)
	 {
	  this.a=a;
	  this.b=a;
	}
	   
	  abstract void cal();
	   void disp()
	   {
	   // int area=a*b;
		System.out.println("area is "+area);
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
	   
	   void cal()
	   {
		  area=a*b;
	   }
}
   
   
class abstractclass
{
     public static void main(String args[])
     {
     //------------------------------------------ONE WAY--------------------------------------
      /* abc1 obj=new abc1(2,4);
       
       obj.cal();
       obj.disp();*/
       
       //-----------------------------SECOND WAY-------------------------------------------
       abc obj=new abc(1,2);// this will give error bcz abc is an abstract class and abstract class cannot have any oject
       abc1 obj1=new abc1(3,4);
       
       abc r;//this is right
       r=obj1;
       r.cal();
       
       abc1 r1;
       r1=obj1;
       r1.disp();
       
       
     }
}   
   
