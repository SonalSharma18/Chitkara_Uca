import java.io.*;
import java.lang.*;
import java.util.*;

class stack
{
  int str[]=new int[10];
   int tos;
   
   stack()
   {
    tos=-1;
  }
  
  void push(int item)
   {
     if(tos==9)
      System.out.println("stack is full");
      else
        str[++tos]=item;
      }
      
    int pop()
    {
      if(tos<0)
      {
        System.out.println("stack is empty");
        return 0;
      }  
       else
       {
          return str[tos--];
        }
       }
     }
     
     
     class stackclass
     {
        public static void main(String args[])
        {
          stack obj=new stack();
          for(int i=0;i<10;i++)
          obj.push(i);
          
          for(int i=0;i<10;i++)
          {
            System.out.println(obj.pop());
           }
         }
       }
              
          
              
  
