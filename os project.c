#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char p[9][4],flag[6];
    int i,j,ptime[10],wtime[10],totalwtime=0,pri[10],flag1,n;
    float avgwt;
    printf("enter no of processes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter process%d name:",i+1);
        scanf("%s",&process[i]);
        printf("enter process time:");
        scanf("%d",&ptime[i]);
        printf("enter priority:");
        scanf("%d",&pri[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pri[i]>pri[j])
            {
                flag1=pri[i];
                pri[i]=pri[j];
                pri[j]=flag1;
                flag1=ptime[i];
                ptime[i]=ptime[j];
                ptime[j]=flag1;
                strcopy(flag,p[i]);
                strcopy(p[i],p[j]);
                strcpy(p[j],flag);
            }
        }
    }
    wtime[0]=0;
    for(i=1;i<n;i++)
    {
    wtime[0]=0;
    for(i=1;i<n;i++)
    {
        wtime[i]=wtime[i-1]+wtime[i-1];
        totwt=totwt+wt[i];
    }
    avgwt=(float)totalwtime/n;
    printf("p_name\t p_time\t priority\t w_time\n");
    for(i=0;i<n;i++)
    {
       printf(" %s\t %d\t %d\t %d\n" ,p[i],pt[i],pr[i],wt[i]);
    }
    printf("total waiting time=%d\n avg waiting time=%f",totwt,avgwt);
   
    int ts,pid[10],need[10],wt1[10],tat[10],i1,j1,n2,n1;
    int bt[10],temp[10],ttat=0,twt=0;
    float avgwt,atat;
    printf("\nEnter the number of Processors \n");
    scanf("%d",&n);
    n1=n;
    printf("\n Enter the Timeslice \n");
    scanf("%d",&ts);
    for(i=1;i<=n;i++)
    {
        printf("\n Enter the process ID %d",i);
        scanf("%d",&pid[i]);
        printf("\n Enter the Burst Time for the process");
        scanf("%d",&bt[i]);
        need[i]=bt[i];
    }
    for(i=1;i<=n;i++)
    {
        temp[i]=1;
        wtime[i]=0;
    }
    while(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            if(need[i]>=ts)
            {
                for(j=1;j<=n;j++)
                {
                    if((i!=j)&&(flag[i]==1)&&(need[j]!=0))
                    wtime[j]+=ts;
                }
                need[i]-=ts;
                if(need[i]==0)
                {
                    temp[i]=0;
                    n--;
                }
            }
            else
            {
                for(j=1;j<=n;j++)
                {
                    if((i!=j)&&(temp[i]==1)&&(need[j]!=0))
                    wtime[j]+=need[i];
                }
                need[i]=0;
                n--;
                temp[i]=0;
            }
        }
    }
    for(i=1;i<=n1;i++)
{ 

tat[i]=wtime[i]+bt[i];
        twt=twt+wtime[i];
        ttat=ttat+tat[i];
    }
    avgwt=(float)twt/n1;
    atat=(float)ttat/n1;
    printf("\n\n Process \t Process ID  \t BurstTime \t Waiting Time \t TurnaroundTime \n ");
    for(i=1;i<=n1;i++)
    {
        printf("\n %5d \t %5d \t\t %5d \t\t %5d \t\t %5d \n", i,pid[i],bt[i],wt[i],tat[i]);
    }
    printf("\n The average Waiting Time is %d",awt);
    printf("\n The average Turn around Time is %d",atat);
}
}
