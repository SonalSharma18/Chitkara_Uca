import java.io.*;
import java.util.*;

class Graph
{
	 int v;
	private LinkedList<Integer> [] adj;
	private boolean [] visited;
	private int [] edge;
	public int [] cc;
	private int count = 0;
	
	Graph(int v)
	{
		this.v = v;
		this.adj = new LinkedList[v];
		this.edge = new int[v];
		this.visited = new boolean[v];
		this. cc = new int[v];
		
		for(int i = 0; i < v; i++)
		{
			this.adj[i] = new LinkedList<>();
		}
		
	}	
	
	public void addEdge(int first, int second)
	{
		adj[first].add(second);
		adj[second].add(first);
		
	}
	
	public int findCount()
	{
		int i;
		for(i = 0; i < v; i++)
		{
			if(!visited[i])
			{
				dfs(i);
				count ++;
			}
		}
		
		return count;
	}
	
	private void dfs(int s)
	{
		visited[s] = true;
		cc[s] = count;
		for(int w : adj[s])
		{
			if(!visited[w])
			{
				dfs(w);
			}
		}
	}
}

public class Connected
{
	public static void main(String args[])
	{
		Graph g = new Graph(13);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(0, 5);
        g.addEdge(0, 6);
        g.addEdge(5, 3);
        g.addEdge(5, 4);
        g.addEdge(4, 3);
        g.addEdge(4, 6);
        g.addEdge(7, 8);
        g.addEdge(9, 10);
        g.addEdge(9, 11);
        g.addEdge(9, 12);
        g.addEdge(11, 12);
        
        int a = g.findCount();
        System.out.println(a);
        
        
        for(int i = 0; i < g.v;i++)
        System.out.println(g.cc[i]);
     }
}     
        
  						
					
