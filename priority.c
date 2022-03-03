#include<stdio.h>
int main()
{
    int bt[10],wt[10],tat[10],p[10],pr[10],n,i,temp1,temp2,temp3;
    printf("Enter the no of process");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the Burst time and Priority for  process %d\n",i+1);
        scanf("%d",&bt[i]);
        scanf("%d",&pr[i]);
        p[i] = i;
    }
    for ( i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (pr[i]>pr[j])
            {
                temp1 = bt[i];
                temp2 = p[i];
                temp3 = pr[i];
                bt[i] = bt[j];
                p[i] = p[j];
                pr[i] = pr[j];
                bt[j] = temp1;
                p[j] = temp2;
                pr[j] = temp3;
            }
            
        }
        
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