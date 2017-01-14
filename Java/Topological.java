import java.io.*;
import java.util.*;

class Digraph
{
	private int v;
	private LinkedList<Integer> [] adj;
	private int [] edge;
	private boolean [] visited;
	Stack<Integer> reverse = new Stack<>();
	
	Digraph(int v)
	{
		this.v = v;
		this.adj = new LinkedList[v];
		this.edge = new int[v];
		this.visited = new boolean[v];
		
		for(int i = 0; i < v; i++)
		this.adj[i] = new LinkedList<>();
		
	}
	
	public void addEdge(int first, int second)
	{
		adj[first].add(second);
	}
	
	/*public Digraph reverse()
	{
		Digraph g = new Digraph(v);
		for(int i = 0; i < v; i++)
		{
			for(int w : adj[i])
			{
				addEdge(w, i);
			}
		}
		
		return g;
	}*/
	
	public void topo()
	{
		int i;
		for(i = 0; i < v; i++)
		{
			if(!visited[i])
			{
				dfs(i);
			}
		}
		
		while(!reverse.isEmpty())
		{
			System.out.println(reverse.pop());
		}		
	}
	
	private void dfs(int source)
	{
		visited[source] = true;
		for(int w : adj[source])
		{
			if(!visited[w])
			{
				dfs(w);
			}
		}
		
		reverse.push(source);
	}
}


public class Topological
{
	public static void main(String args[])
	{
		 Digraph g = new Digraph(13);
        g.addEdge(0, 1);
        g.addEdge(0, 5);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 2);
        g.addEdge(3, 5);
        g.addEdge(4, 2);
        g.addEdge(4, 3);
        g.addEdge(5, 4);
        g.addEdge(6, 0);
        g.addEdge(6, 4);
        g.addEdge(6, 9);
        g.addEdge(6, 8);
        g.addEdge(7, 9);
        g.addEdge(7, 6);
        g.addEdge(8, 6);
        g.addEdge(9, 10);
        g.addEdge(9, 11);
        g.addEdge(10, 12);
        g.addEdge(11, 4);
        g.addEdge(11, 12);
        g.addEdge(12, 9);					
		
		g.topo();					
							
		
	}
}								
