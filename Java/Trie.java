import java.io.*;
import java.util.*;

class Trie
{
	TrieNode root;
	private class TrieNode
	{
		Integer value;
		TrieNode [] nodes = new TrieNode[26];
		
	}	
	public Trie()
	{
		root = new TrieNode();
	}
	
	void insert(String w, Integer v)
	{
		TrieNode p = root;
		int i, index;
		for( i = 0; i < w.length(); i++)
		{
		    index = w.charAt(i) - 'a';
			if(p.nodes[index] == null)
			p.nodes[index] = new TrieNode();
			//System.out.println(p.nodes[index]);
			p = p.nodes[index];
		}
		p.value = v;
		System.out.println(p.value);
	}
	private TrieNode Search(String w)
	{
		int i;
		TrieNode p = root;
		for(i = 0; i < w.length(); i++)
		{
			int index = w.charAt(i) - 'a';
			if(p.nodes[index] == null)
			return null;
			
			p = p.nodes[index];
		}
		return p;
	}
	
	void searchtree(String w)
	{
		TrieNode b = Search(w);
		if(b != null)
		System.out.println(b.value);
	}	
			
	public void softdel(String s)
	{
		dels(s,root,0);
	}
	
	private void dels(String s, TrieNode a, int level)
	{
		if(	a == null)
		return;
		
		if(level == s.length())
		{
			a.value = null;
			return;
		}
		
		int index = s.charAt(level) - 'a';
		dels(s,a.nodes[index],level+1);
	}
	
	public void harddel(String s)
	{
		return delh(s,root,0);
	}
	private boolean delh(String s, TrieNode a, int level)
	{
		if(a == null)
		return false;
		
		if(level == s.length())
		{
			a.val = null;
			return !hasChild(a);
		}
		
		int index = charAt(level) - 'a';
	    boolean ch = delh(s,a.nodes[index],level+1);
	    
	    if(ch == true)
	    {
	    	a.nodes[index] = null;
	    	return !hasChild(a);
	    }
	    
	    return false;
	 }
	 
	 private boolean hasChild(TrieNode b)
	 {
	 	for(int i = 0; i <26; i++)
	 	{
	 		if(b.nodes[i] != null)
	 		return true;
	 	}
	 	
	 	return false;
	 }		
	 		
	 	
	 	 					
	public static void main(String args[])
	{
		Trie ob = new Trie();
		ob.insert("java",2);
		ob.insert("jabc",23);
		ob.searchtree("jabc");
		ob.softdel("java");
		//System.out.println(t);
	}
}				
