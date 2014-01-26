#include<stdio.h>

void spiral(int a[30][30], int l, int no, int n)
{
	int i=0;
	
	for(i=0; i<l; i++)
	{
		no++;	
		if(i<l-1)
		{
			a[n][i+n]=no;
			a[i+n][l+n-1]=no+l-1;	
			a[l+n-1][l+n-i-1]=no+l+l-2;
			a[l+n-i-1][n]=no+l+l+l-3;
		}

		else
		{
			a[n][i+n]=no;
			a[i+n][l+n-1]=no+l-1;	
			a[l+n-1][l+n-i-1]=no+l+l-2;
		}	
	}	
}

int main()
{
	int a[30][30], l, i, j, no=0, n=0;
	
	printf("Enter the length of the row: ");
	scanf("%d", &l);

	for(i=l; i>0; i-=2)
	{
		spiral(a, i, no, n);
		n++;
		no=no+4*(i-1);
	}

	for(i=0; i<l; i++)
	{
		printf("\n");
		for(j=0; j<l; j++)
		{
			if(a[i][j]/10>=10)			
				printf(" %d", a[i][j]);
			else if(a[i][j]/10==0)
				printf("   %d", a[i][j]);
			else
				printf("  %d", a[i][j]);
		}
	}

	return 0;
}		





		
