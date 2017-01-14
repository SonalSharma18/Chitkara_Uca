import java.io.*;
import java.util.*;

class Graph{

 private int v;
 private LinkedList<Integer> [] adj;
 private boolean [] visited;
 private int [] edge;
 private boolean isCycle;
 Graph(int v)
 {
 	int i;
 	this.v = v;
 	this.adj = new LinkedList[v];
 	this.visited = new boolean[v];
 	this.edge = new int[v];
 	for(i = 0; i < v; i++)
 	{
 		adj[i] = new LinkedList<Integer>();
 		visited[i] = false;
 	}
 	isCycle = false;
 }
 
 public void addEdge(int first, int second)
 {
 	adj[first].add(second);
 	adj[second].add(first);
 }
 
 public void cycleDet()
 {
 	dfs(0, -1);
 	if(isCycle)
 	System.out.println("Cycle detected");
 	else
 	System.out.println("No Cycle detected");
 }
 
 private void dfs(int v, int p)
 {
 	visited[v] = true;
 	for(int w : adj[v])
 	{
 		if(!visited[w])
 		dfs(w, v);
 		else
 		{
 			if(w != p)
 			isCycle = true;
 		}
 	}
 	
 }
 }
 
 
 public class Cycle
 {
 	public static void main(String args[])
 	{
 		Graph g = new Graph(5);
 		//g.addEdge(0,4);
 		//g.addEdge(4,3);
 		//g.addEdge(3,0);
 		//g.addEdge(3,2);
 		//g.addEdge(2,1);
 		g.addEdge(0,4);
 		g.addEdge(4,3);
 		
 		g.cycleDet();
 	}
 }		
 			
 			
 	

