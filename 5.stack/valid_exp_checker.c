#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], stack[50];
    int top = -1;
    int i;
    printf("Enter string: ");
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++)
    {   top++;
        if(i=="("||i=="["){
            stack[top]=i;
        }
   
        if(i==")"&& stack[top]=="()")
        {
            if(i==-1)
                printf("invalid");
            else{
                printf("valid");
            }
        }
        else if(i=="]"&& stack[top]=="[]")
        {
            printf("valid");
        }
        else{
            printf("invalid");
        }
        top--;
    }
    
    return 0;
}