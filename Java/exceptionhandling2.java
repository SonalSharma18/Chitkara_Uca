import java.io.*;
import java.lang.*;
import java.util.*;

class exceptionhandling2
{
  static void abc()
  {
    try{
      throw new NullPointerException("demo");
      }
      catch(NullPointerException e)
      {
        System.out.println("caught");
        throw e;//rethrow
      }
    }
    
    public static void main(String args[])
    {
      try{
        abc();
        }
        catch(NullPointerException e)
      {
        System.out.println("Recaught "+ e);
        
      }  
     }
    }   
