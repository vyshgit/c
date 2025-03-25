#include<stdio.h>
#include<stdlib.h>
int g[100][100],edge,n,i=0,j=0;
int visited[100],queue[100],front=-1,rear=-1;
int bfs(int vertex,int n)
{
   if(visited[vertex]==0 && vertex<=n)
   {
        printf("Visited:%d\n",vertex);
        visited[vertex]=1;
        for(i=vertex+1;i<=n;i++)
        {
            if(g[vertex][i]==1 && !visited[i])
            {
                queue[++rear]=i;
                if(front==-1)
                    front=0;
                
            }
        }
        
        if(rear<front)
            return 0;
        bfs(queue[front++],n);
   }
}

void main()
{
    printf("Enter the number of nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            g[i][j]=0;
    }
    printf("Enter the no of edges:");
    scanf("%d",&edge);
    for(i=1;i<=edge;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        g[x][y]=1;
    }
    printf("Current graph:\n\t");
    for(i=1;i<=n;i++){
    printf("%d\t",i);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
        for(j=1;j<=n;j++)
            printf("%d\t",g[i][j]);
        printf("\n");
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    int vertex;
    printf("Enter the  vertex to start:");
    scanf("%d",&vertex);
    bfs(vertex,n);
    
}