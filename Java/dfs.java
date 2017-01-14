import java.io.*;
import java.util.*;

class Graph
{
	Integer v;
	private LinkedList<Integer> [] adj;
	 boolean [] visited;
	private int [] edge;
	
	
	Graph(int v)
	{
		this.v = v;
		this.adj = new LinkedList[v];
		this.visited = new boolean[v];
		this.edge = new int[v];
		
		for(int i = 0; i < v; i++)
		this.adj[i] = new LinkedList<Integer>();
	}
	
	public void addedge(int first, int second)
	{
		adj[first].add(second);
		adj[second].add(first);
	}
	public void df(int source)
	{
		int i;
		visited[source] = true;
		
			for( Integer w : adj[source])
			{	
				if(!visited[w])
				{
					df(w);
					edge[w] = source;
				}
			}
			
	}
	
	public boolean hasPath(int v1)
	{
		return visited[v1];
	}
	
	public Iterator<Integer> pathto(int v, int s)
	{
		int i;
		Stack<Integer> path = new Stack<Integer>();
		if(!hasPath(v))
		return null;
		
		for(i = v; i != s; i = edge[i]);
		{
			path.push(i);
		}
		
		path.push(s);
		
		//while(!path.isEmpty())
		//{
		//	System.out.print(path.pop() + "->");
		//}
		
		return path;	
	}		
}	

public class dfs
{
	public static void main(String args[])
	{
		Graph g = new Graph(6);
		
		g.addedge(5,1);
		g.addedge(5,0);
		g.addedge(0,4);
		
		g.addedge(1,4);
			
		g.df(0);
		
		for(int i =0; i < g.v; i++)
		{
			System.out.println(g.visited[i]);
		}
		
		Iterator it = g.pathto(5, 1);
	}
}		
				
		
			
