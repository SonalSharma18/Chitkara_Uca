import java.io.*;
import java.util.*;
import java.lang.*;

public class Lsd extends StringSort
{
	protected void sort(String a[])
	{
		int w = a[0].length();
		sort(a, w);
	}
	private void sort(String a[], int w)
	{
		int n = a.length;
		
		String aux[] = new String[n];
		int d, i;
		for(d = 0; d < n; d++)
		{	int count[] = new int[R + 1];
			for(i = 0; i < n; i++)
			{
				count[a[i].charAt(d) + 1]++;
			}
			
			for(int j = 1; j <= R; j++)
			{
				count[j] += count[j - 1];
			}
			
			for(i = 0; i < n; i++)
			{
				aux[count[a[i].charAt(d)]] = a[i];
					
					count[a[i].charAt(d)]++;
			}
			for(i = 0; i < n; i++)
			{
				a[i] = aux[i];
			}	
			
		}
	}
}				
