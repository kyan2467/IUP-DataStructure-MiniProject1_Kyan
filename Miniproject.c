#include <stdio.h>
#include <string.h>

#define MAX 10

char stack[MAX][50], queue[MAX][50], deque[MAX][50];
int top=-1, front=0, rear=-1, df=0, dr=-1;

int main(){
    int n;
    char task[50];

    while(1){
        printf("1.Lakuin 2.Urgent 3.Kerjain 4.Undo 5.Keluar\n");
        scanf("%d",&n); getchar();

        if(n==1){
            printf("Task: ");
            fgets(task,50,stdin);
            task[strcspn(task,"\n")]=0;
            strcpy(queue[++rear],task);    
            strcpy(stack[++top],task);     
        }

        else if(n==2){
            printf("Urgent: ");
            fgets(task,50,stdin);
            task[strcspn(task,"\n")]=0;
            strcpy(deque[++dr],task);       
            strcpy(stack[++top],task);     
        }

        else if(n==3){
            if(df<=dr) printf("Urgent: %s\n",deque[df++]);
            else if(front<=rear) printf("Lakuin: %s\n",queue[front++]);
            else printf("No tasks\n");
        }

        else if(n==4){
            if(top>=0) printf("Undo: %s\n",stack[top--]);
        }

        else if(n==5) break;
    }
}
