import java.io.*;
import java.util.*;

class Priority implements Comparable
{
	private int avgTime;
	private int medianTime;
	
	Priority(int avgTime, int medianTime)
	{
		this.avgTime = avgTime;
		this.medianTime = medianTime;
	}
	
	public int compareTo(Object o)
	{
		Priority p = (Priority) o;
		if(this.avgTime < avgTime){
		System.out.println("small");
		return -1;
		}
		if(this.avgTime > avgTime)
		{
		System.out.println("GRE");
		return 1;
		
		}	
		
		return 0;
	}
}	
	
	class Process
	{
		private String Pname;
		private int Pid;
		
		Process(String Pname, int Pid)
		{
			this.Pname = Pname;
			this.Pid = Pid;
		}
		
		public String toString()
		{
			return this.Pname;
		}
	}
	
	public class Tree
	{
		private Node root = null;
		
		class Node
		{
			Priority key;
			Process value;
			Node left;
			Node right;
			
			Node(Priority key, Process value)
			{
				this.key = key;
				this.value = value;
				this.left = null;
				this.right = null;
			}
		}
		
		public void insert(Priority key, Process value)
		{
			root = insert(root, key, value);
		}
		
		private Node insert(Node x, Priority key, Process value)
		{
			if(x == null)
			return new Node(key,value);
			
			if(key.compareTo(x.key) < 0)
			x.left = insert(x.left, key, value);
			else
			if(key.compareTo(x.key) > 0)
			x.right =insert(x.right, key, value);
			
			else
			x.value = value;
			
			return x;
		}
		
		public void inorder()
		{
			inorder(root);
		}
		
		private void inorder(Node x)
		{
			if(x == null)
			return ;
			System.out.println("gfbt" );
			
			inorder(x.left);
			System.out.println(x.value);
			inorder(x.right);
		}
		
		public static void main(String args[])
		{
			Process p1 = new Process("process1", 1);
			Process p2 = new Process("process2", 2);
			Process p3 = new Process("process3", 3);
			
			Priority pt1 = new Priority('2','3');
			Priority pt2 = new Priority('4','5');
			Priority pt3 = new Priority('6','7');
			
			
			Tree t1 = new Tree();
			t1.insert(pt1,p1);
			
			t1.insert(pt2,p2);
		
			t1.insert(pt3,p3);
		
			t1.inorder();
			
			
			
			 
			
		}
	}		
		
							 					
