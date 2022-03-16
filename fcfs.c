//its just a bascic code u have to modify

#include<stdio.h>
int main()
{
    int bt[10],wt[10],tat[10],n,i;
    printf("Enter the no of process");
    scanf("%d",&n);
    printf("Enter the Burst time");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }
    wt[0] = 0;
    for(i = 1;i < n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
    }
    for ( i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i]; 
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\n",bt[i],wt[i],tat[i]);
    }
}
