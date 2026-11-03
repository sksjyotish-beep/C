#include<stdio.h>
#define max 5
int stack[max];
int top=-1;

void push(int num)
{

    if(top==max-1)
        printf("overflow");
    else{
        for(int i=2;i<num;i++){
            while(num%i==0){
                 top+=1;
                stack[top]=i;
                num= num / i;
            }
        }
         printf("Prime factors in stack: ");

        for(int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }

       
        //printf("pushed %d in stack\n",stack[top]);
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
    push(450);
    
    
    return 0;
}
