import java.io.*;
import java.util.*;
import java.lang.*;



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
		Priority p = (Priority)o;
		if(this.avgTime < p.avgTime)
		return -1;
		if(this.avgTime > p.avgTime)
		return 1;
		
		return 0;
	}
}

class Process
{
	 String pname;
	 int pid;
	
	Process(String pname, int pid)
	{
		this.pname = pname;
		this.pid = pid;
	}
}


class Tree
{
	private Node root = null;
	
	private class Node
	{
		Priority key;
		Process value;
		Node right;
		Node left;
		
		
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
			root=insert(key,value,root);
		}
		private Node insert(Priority key, Process value, Node root)
		{
			if(root == null)
			return new Node(key,value);
			
			if(key.compareTo(root.key) < 0)
			root.left = insert(key,value,root.left);
			
			else
			if(key.compareTo(root.key) > 0)
			root.right = insert(key,value,root.right);
			
			return root;
		}
		
		public void inorder()
		{
			inorder(root);
		}
		
		private void inorder(Node root)
		{
			if(root == null)
			return;
			
			inorder(root.left);
			System.out.print(root.value.pname + " ");
			inorder(root.right);
		}
	}
	
	public class Solution
	{
		public static void main(String args[])
		{
			Priority p1 = new Priority(2,3);
			Priority p2 = new Priority(4,5);
			Priority p3 = new Priority(1,2);
			
			Process pr1 = new Process("pro1",1);
			Process pr2 = new Process("pro2",2);
			Process pr3 = new Process("pro3",3);
			
			Tree tr = new Tree();
			tr.insert(p1, pr1);
			tr.insert(p2, pr2);
			tr.insert(p3, pr3);
			
			tr.inorder();
		}
	}	
						 
					
					
