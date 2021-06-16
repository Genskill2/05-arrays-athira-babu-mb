/* Enter your solutions in this file */
#include <stdio.h>

int max (int n[], int l)
{
	int max=n[0];
	for (int i=0; i<l; i++)
	{
		if (n[i]>max)
		max=n[i];
	} 
	return max;
}

int min (int n[], int l)
{
	int min=n[0];
	for (int i=0; i<l; i++)
	{
		if (n[i]<min)
		min=n[i];
	} 
	return min;
}

float average (int n[], int l)
{
	float total=0.0, avg;
	for (int i=0; i<l; i++)
	{
		total+=n[i];
	}
	avg=(float)(total/l);
	return avg;
}

int mode (int n[], int l)
{
	int maxc=0, count, mode;
	for (int i=0; i<l; i++)
	{
		count=0;
		for (int j=0; j<l; j++)
		{
			if(n[i]==n[j])
			count++;
		}
		if (count>maxc)
		{
			maxc = count;
			mode = n[i];
		}
	}
	return mode;
}

int factors(int num, int n[])
{
	int p, k=0,no;
	for (int i=2; i<=num; i++)
	{
		p=0;
		if(num%i==0)
		{
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				p=1;
			}
			if(p==0)
			{
				no = num;
				while(no%i==0)
				{
				n[k]=i;
				k++;
				no/=i;
				}
			}
		}		
	}
	return k;
}
