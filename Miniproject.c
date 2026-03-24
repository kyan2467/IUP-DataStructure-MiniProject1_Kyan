#include <stdio.h>
#include <string.h>

#define MAX 10

char stack[MAX][50], queue[MAX][50], deque[MAX][50];
int top=-1, front=0, rear=-1, df=0, dr=-1;

int main(){
    int c;
    char task[50];

    while(1){
        printf("1.Lakuin 2.Urgent 3.Kerjain 4.Undo 5.Keluar\n");
        scanf("%d",&c); getchar();

        if(c==1){
            printf("Task: ");
            fgets(task,50,stdin);
            task[strcspn(task,"\n")]=0;
            strcpy(queue[++rear],task);     // queue
            strcpy(stack[++top],task);      // stack
        }

        else if(c==2){
            printf("Urgent: ");
            fgets(task,50,stdin);
            task[strcspn(task,"\n")]=0;
            strcpy(deque[++dr],task);       // deque
            strcpy(stack[++top],task);      // stack
        }

        else if(c==3){
            if(df<=dr) printf("Urgent: %s\n",deque[df++]);
            else if(front<=rear) printf("Normal: %s\n",queue[front++]);
            else printf("No tasks\n");
        }

        else if(c==4){
            if(top>=0) printf("Undo: %s\n",stack[top--]);
        }

        else if(c==5) break;
    }
}