#include<stdio.h>

int main()
{
	int n, i, j;
	printf("Enter the total no. of process : ");
	scanf("%d", &n);
	
	int p_id[n], arr_t[n], burst_t[n];

	for(i = 0;i < n; i++)
	{
		printf("Process %d :",i+1);
		printf("Arrival time : ");
		scanf("%d",&arr_t[i]);
		burst_t[i] = 2 * arr_t[i]; 

	} 


	printf("  Process Id \t Arrival Time \t Burst Time\n");
	
	for(j = 0; j < n; j++)
	{
		printf("\t%d\t", j + 1);
		printf("\t%d\t", arr_t[j]);
		printf("\t%d\t\n", burst_t[j]);
	}
}
