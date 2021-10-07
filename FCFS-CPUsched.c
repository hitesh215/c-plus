#include<stdio.h>

//FCFS CPU scheduling algorithm
void findWaitingTime(int processes[], int n,int bt[], int wt[])
{
        int i;
    wt[0] = 0;
    for (i = 1; i < n ; i++)
    {
        wt[i] =  bt[i-1] + wt[i-1];
    }
}
void findTurnAroundTime( int processes[], int n,int bt[], int wt[], int tat[])
{
        int i;
    for (i = 0; i < n ; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}
void findavgTime( int processes[], int n, int bt[])
{
        int wt[n], tat[n],i;
        float  total_wt = 0, total_tat = 0;
        findWaitingTime(processes, n, bt, wt);
        findTurnAroundTime(processes, n, bt, wt, tat);
        printf("Processes  Burst time  Waiting time  Turn around time\n");
        for (i=0; i<n; i++)
        {
                total_wt = total_wt + wt[i];
                total_tat = total_tat + tat[i];
                printf(" %d ",(i+1));
                printf("\t\t%d ", bt[i] );
                printf("\t\t%d",wt[i] );
                printf("\t\t%d\n",tat[i] );
        }
        float s= total_wt / n;
        float t=total_tat / n;
        printf("Average waiting time = %f",s);
        printf("\n");
        printf("Average turn around time = %f ",t);
}
int main()
{
    printf("Enter the number of processes: ");
    int n;
    int proc[n],b_t[n];
    scanf("%d",&n);
    printf("Enter the processes");
    for(int i=0;i<n;i++)
    scanf("%d",&proc[i]);
    printf("Enter the burst times");
    for(int i=0;i<n;i++)
    scanf("%d",&b_t[i]);
    findavgTime(proc, n, b_t);
    return 0;
}
