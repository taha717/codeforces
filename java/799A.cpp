import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int t = sc.nextInt();
		int k = sc.nextInt();
		int d = sc.nextInt();
		int a = n;
		int temp = (int) Math.ceil((double)n/k);
	
		int timeTakenNormal = temp*t;
		int timeTakenOven = d;
		
		a-=(d/t)*k;
		while(a>0)
		{
			a-= 2*k;
			timeTakenOven += t;
		}
		
		if(k>=n)
		{
			System.out.println("NO");
		}
		else
		{
			if(timeTakenNormal > timeTakenOven)
			{
				System.out.println("YES");
			}
			else
			{
				System.out.println("NO");
			}
		}
	}
}