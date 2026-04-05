#include <stdio.h>
#define MAX 5
int front =-1;
int rear =-1;
int queue[MAX];

void enqueue(){
    int value;
    if (rear==MAX-1){
        printf("queue overflow!!\n");
    }
    else{
        printf("enter a value:");
        scanf("%d",&value);
        if (front==-1){
            front=0;
        }
        rear++;
        queue[rear]=value;
        printf("value inserted!\n");
    }
}

void dequeue(){
    if (front==-1 || front>rear){
        printf("queue underflow\n");
    }
    else{
        printf("the dequeued value is: %d\n",queue[front]);
        front++;
    }
}

void peek(){
    if (front==-1 || front>rear){
        printf("queue is empty\n");
    }
    else{
        printf("the front element is:%d\n",queue[front]);
    }
}

void display(){
    if (front==-1 || front>rear){
        printf("queue is empty\n");
    }
    else{
        printf("the queue is :\n");
        for(int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int sw=0;
    while (sw!=5){
        printf("1.enqueue elements\n");
        printf("2.dequeue element\n");
        printf("3.peek elements\n");
        printf("4.display elements\n");
        printf("5.exit\n");
        printf("enter a value:");
        scanf("%d",&sw);
        switch (sw){
            case 1:
            enqueue();
            break;

            case 2:
            dequeue();
            break;

            case 3:
            peek();
            break;

            case 4:
            display();
            break;

            case 5:
            printf("exiting...");
            break;

            default:
            printf("invalid choice");
        }
    }
    return 0;
}
