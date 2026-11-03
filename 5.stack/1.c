#include<stdio.h>
#define max 5
int stack[max];
int top=-1;

void push(int num)
{

    if(top==max-1)
        printf("overflow");
    else{
        top+=1;
        stack[top]=num;
        printf("pushed %d in stack\n",stack[top]);
    }
}
void pop(){
    if(top==-1)
        printf("underflow");
    else{
        
        printf("popped %d out of stack\n",stack[top]);
        top-=1;
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    pop(30);
    pop(20);
    return 0;
}
