#include<stdio.h>
#define INF 999
int main()
{
    int n,i,j;
    int cost[10][10];
    int visited[10]={0};
    int min,u,v;
    int total=0,edges=0;
    printf("enter number of vertices:");
    scanf("%d",&n);
    printf("enter cost adjacency matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);

            
        }
    }
    visited[0]=1;
    printf("\nMinimum spanning tree:\n");
    while(edges< n-1)
    {
        min=INF;
        for(i=0;i<n;i++)
        {
            if(visited[i])
            {
                for(j=0;j<n;j++)
                {
                    if(!visited[j]&&cost[i][j]<min)
                    {
                        min=cost[i][j];
                        u=i;
                        v=j;
                    }
                }
            }
        }
        if(min==INF)
        {
            printf("graph is not connected\n");
            return 0;

        }
        printf("%d-%d:%d\n",u,v,min);
        total+=min;
        visited[v]=1;
        edges++;
    }
    printf("\nMinimum cost =%d\n",total);
    return 0;
    
}