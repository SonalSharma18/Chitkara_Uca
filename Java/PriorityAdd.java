import java.io.*;
import java.util.*;

public class PriorityAdd
{
	public static void main(String args[])
	{
		PriorityQueue<Integer> pr = new PriorityQueue<Integer>();
		int i;
		//for(i = 0; i < 5; i++)
		pr.add(0);
		pr.add(2);
		pr.add(3);
		pr.add(7);
		
		System.out.println(pr);
		
		//pr.clear();//removes all the elements from the list
		
		
		//System.out.println(pr);
		
		Iterator it = pr.iterator();
		while(it.hasNext())
		{
			System.out.println(it.next());
		}	
		
		//pr.offer(1);
		pr.offer(5);
		System.out.println(pr);
		
	}
}		
