#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int (*)[4]);
int main()
{
	int a[4][4]={{10,7,5,3},{6,15,11,4},{9,1,13,8},{12,14,2,0}};
	int l=3,m=3;
	int moves=40;
	int input;
	while(moves)
	{  
	  system("cls");
	  display(a);
	input=getch();
	if(input==75)
	{
		if(m<=2)
		{
			a[l][m]=a[l][m+1];
			m++;
			a[l][m]=0;
			moves--;
		}
		
	}
	else if(input==72)
	{
		if(l<=2)
		{
			a[l][m]=a[l+1][m];
			l++;
			a[l][m]=0;
			moves--;
		}
	}
	else if(input==77)
	{
		if(m>=1)
		{
			a[l][m]=a[l][m-1];
			m--;
			a[l][m]=0;
			moves--;
		}
	}
	else if(input==80)
	{
		if(l>=1)
		{
			a[l][m]=a[l-1][m];
			l--;
			a[l][m]=0;
			moves--;
		}
	}
}
	
}
void display(int (*a)[4])
{  
int i,j;
	  for(i=0;i<4;i++)
	  {
	  	for(j=0;j<4;j++)
	  	{
	  		printf("%d ",a[i][j]);
		  }
		  printf("\n");
	  }
}
