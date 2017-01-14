public abstract class StringSort
{
	protected abstract void sort(String a[]);
	protected final int R = 256;
	protected void print(String a[])
	{
		int n = a.length;
		for(int i = 0; i < n; i++)
		{
			System.out.println(a[i]);
		}
	}
}			
