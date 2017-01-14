import java.io.*;
import java.util.*;

class Graph
{
	int v;
	private LinkedList<Integer> [] adj;
	private boolean [] visited;
	private int [] edge;
	
	
	Graph(int v)
	{
		this.v = v;
		this.visited = new boolean[v];
		this.adj = new LinkedList[v];
		this.edge = new int[v];
			
		for(int i = 0; i < v; i++)
		{
			this.adj[i] = new LinkedList<Integer>();
		}
	}
	
	public void addedge(int first, int second)
	{
		adj[first].add(second);
		adj[second].add(first);
	}
	
	public void bfs(int source)
	{
		Queue<Integer> q = new LinkedList<Integer>();
		q.add(source);
		visited[source] = true;
		
		//Integer w;
		int i, j, k;
		
		while(!q.isEmpty())
		{
			k = q.remove();
			for(int w : adj[k])
			{
				
				if(visited[w] != true)
				{
					q.add(w);
					visited[w] = true;
					edge[w] = k;
				}
			}
		}
		
		
	}
	
}


public class bfs
{
	public static void main(String args[])
	{
		Graph g = new Graph(5);
		g.addedge(3,2);
		g.addedge(1,2);
		g.addedge(1,3);
		g.addedge(2,3);
		g.addedge(0,4);
	
		g.bfs(3);
	}	
}	
	
	
					
					
					
					
		
				
						
