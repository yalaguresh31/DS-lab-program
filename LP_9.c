/*Design, Develop and implement a program in C for the following operations on Graph (G) of cities 
a. Create a Graph of N cities using Adjacency Matrix. 
b. Print all the nodes reachable from a given starting node in a diagraph using DFS/BFS method.*/
#include<stdio.h>
#include<stdlib.h>
int a[30][30],visited[20],n;
void create() {
    int i,j;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        printf("Adjacency matrix :\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void dfs(int v) {
    int i;
    printf("%d\t",v);
    visited[v]=1;
    for(i=0;i<n;i++) {
        if(visited[i]==0 && a[v][i]==1) {
            dfs(i);
        }
    }
}

int main() {
    int i,ch,source;
    while(1) {
        printf("\nMENU\n1.Create graph\t2.DFS Traversal\t3.EXIT\nEnter the choice\n");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                create();
                break;
            case 2:
                for(i=0;i<n;i++)
                visited[i]=0;
                printf("Enter the source vertex\n");
                scanf("%d",&source);
                dfs(source);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid\n");
        }
    }
    return 0;
}


