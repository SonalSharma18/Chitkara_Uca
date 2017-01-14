import java.io.*;
import java.lang.*;
import java.util.*;

class outer
{
  int x;
  void test()
  {
  
  for(int i=0;i<10;i++)
  {
    class inner
    {
       void display()
       {
         System.out.println("sonal \n");
         }
         }
         
         inner i1= new inner();
         i1.display();
         }
         }
        }
        
        class innerouter
        {
            public static void main(String args[])
            {
              outer o1=new outer();
              o1. test();
}
}
