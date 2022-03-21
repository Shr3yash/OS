#include <stdio.h>
#include<conio.h>

// Function to find the waiting time for all processes
int waitingtime(int proc[], int n,int burst_time[], int wait_time[])
	{
	wait_time[0] = 0;
	for (int i = 1; i < n ; i++ )
	wait_time[i] = burst_time[i-1] + wait_time[i-1] ;
	return 0;
	}

// Function to calculate turn around time
int turnaroundtime( int proc[], int n,int burst_time[], int wait_time[], int tat[])
	{
	int i;
	for ( i = 0; i < n ; i++)
	tat[i] = burst_time[i] + wait_time[i];
	return 0;
	}

//Function to calculate average time
int avgtime( int proc[], int z, int burst_time[])
	{
	int wait_time[10], tat[10], total_wt = 0, total_tat = 0;
	int i;
	waitingtime(proc, z, burst_time, wait_time);
	turnaroundtime(proc, z, burst_time, wait_time, tat);
	printf("Processes  Burst   Waiting Turn around \n");
	for ( i=0; i<z; i++)
		{
		total_wt = total_wt + wait_time[i];
		total_tat = total_tat + tat[i];
		printf(" %d\t  %d\t\t %d \t%d\n", i+1, burst_time[i], wait_time[i], tat[i]);
		}
	printf("Average waiting time = %f\n", (float)total_wt / (float)z);
	printf("Average turn around time = %f\n", (float)total_tat / (float)z);
	return 0;
	}

int main()
	{
	
	int proc[10],n,burst_time[10];
	printf("Enter the no. of processes(max 10):\n");
	scanf("%d",&n);
	printf("Enter the burst time of processes:\n");
	for(int i=0;i<n;i++)
		{
		printf("p%d :",i);
		scanf("%d",&burst_time[i]);
		printf("\n");
		}
	avgtime(proc, n, burst_time);
	getch();
	}