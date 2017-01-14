import java.io.*;
import java.util.*;

public class Test
{
	public static void main(String args[])
	{
		String a[] = {"tom", "apple", "sells", "are", "seashells", "sea", "by", "seashells", "shore", "surely",
				"the" };
		StringSort s = new Lsd();
		s.sort(a);
		s.print(a);
	}
}				
