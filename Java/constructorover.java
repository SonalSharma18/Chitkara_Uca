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
	  
	  abc(int a)
	  {
		 this.a=a;
		 b=a;
	  }
		
	  abc(int a,int b)
	  {
		  this.a=a;
		  this.b=b;
	  }
		   
		void disp()
		{
		   System.out.println(a+" "+b);
		}
}
    
    class constructorover
    {
       public static void main(String args[])
       {
        
      abc obj=new abc();
      obj.disp();
      abc obj1=new abc(2);
      obj1.disp();
      abc obj2=new abc(1,3);
      obj2.disp();
    }  
  }  
           
