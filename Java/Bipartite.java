import java.io.*;
import java.util.*;

class Graph
{
	Integer v;
	private LinkedList<Integer> [] adj;
	 boolean [] visited;
	private int [] edge;
	private boolean bipartite = true;
	public final Color[] color;
	boolean RED = true;
	
	Graph(int v)
	{
		this.v = v;
		this.adj = new LinkedList[v];
		this.visited = new boolean[v];
		this.edge = new int[v];
		this.color = new Color[v];
		color[0] = Color.RED;
		
		for(int i = 0; i < v; i++)
		this.adj[i] = new LinkedList<Integer>();
		
		
	}
	
	public void addEdge(int first, int second)
	{
		adj[first].add(second);
		adj[second].add(first);
	}
	
	public boolean isBipartite()
	{
		dfs(0);
		for(boolean b : visited)
		{
			if(!b)
			{
				System.out.println("not connected");
				return false;
			
			}
		}			
		return bipartite;
	}	
	
	private void dfs(int a)
	{
		visited[a] = true;
		for(int w : adj[a])
		{
			if(!visited[w])
			{
				color[w] = color[a] == Color.RED? Color.WHITE : Color.RED;
				dfs(w);
			}
			else
			{
				if(color[w] == color[a])
				bipartite = false;
			}
		}
	}
	 private static enum Color {

        RED,
        WHITE;
    }
}


public class Bipartite
{
	public static void main(String args[])
	{
		 Graph g = new Graph(7);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(0, 5);
        g.addEdge(0, 6);
        g.addEdge(5, 4);
        g.addEdge(4, 2);
        g.addEdge(4, 6);
        g.addEdge(1, 3);
        g.addEdge(2, 3);
        //g.addEdge(7, 8);
        //Bipartite b = new Bipartite(g);
        System.out.println("result : " + g.isBipartite());
        for (int i = 0; i < 7; i++) {
            System.out.println(g.color[i]);
        }
    }

   
}				
