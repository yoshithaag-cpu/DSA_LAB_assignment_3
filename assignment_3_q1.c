#include <stdio.h>
int n;

#define MAX 5
int stack[MAX];
int top=-1;

void push(){
    if (top==MAX-1){
        printf("stack overflow!\n");
    }
    else{
        int value;
        printf("enter a value to push:");
        scanf("%d",&value);
        top++;
        stack[top]=value;
    }
}

void pop(){
    if (top==-1){
        printf("stack underflow!\n");
    }
    else{
        printf("the popped element: %d\n",stack[top]);
        top--;
    }
}

void peek(){
    if (top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("the top element is: %d\n",stack[top]);
    }
}

void display(){
    if (top==-1){
        printf("stack is empty\n");
    }
    else{
        printf("stack elements are: ");
        for(int i=top; i>=0; i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int sw=0;
    while (sw!=5){
        printf("1.push elements\n");
        printf("2.pop element\n");
        printf("3.peek elements\n");
        printf("4.display elements\n");
        printf("5.exit\n");
        printf("enter a value:");
        scanf("%d",&sw);
        switch (sw){
            case 1:
            push();
            break;

            case 2:
            pop();
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