#include<stdio.h>
#include<stdlib.h>
int choice ,i,j;
void create(){
    

}
void dfs(int i){
    printf("%d\t",i);
    visited[i] = 1;
    for(j=0; j<n; j++){
        if(visited[j] == 0 && g[i][j] == 1)
        dfs9(j);
    }//end of loop
}//end of dfs

int main(){
    while(1){
        printf("press 1.create a graph 2.traverse using DFS 3.traverse using BFS 4.exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4 : exit(0);
            break;
          default : printf("invaled choice");
        }//end of switch
    }//end of while

    return 0;
}
