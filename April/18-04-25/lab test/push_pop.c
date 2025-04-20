#include<stdio.h>
int stk[20],i,max=5,top=-1,item,c;
int pop()

{
if(top==-1){
    printf("stack is empty/Underflow");
    return 0;
}
item=stk[top];
top=top-1;
printf("\n STACK:\n" );
for(i=top;i>=0;i--){
    printf("\n stack[%d]=%d",i,stk[i]);
}
}
int push()
{
    if(top==max){
        printf("\nstack is full/Overflow");
        return 0;
    }
    top=top+1;
        printf("\n Enter new item to push:");
        scanf("%d",&item);
        stk[top]=item;
        printf("\nSTACK:\n");
        for(i=top; i>=0;i--){
            printf("\n stack [%d]=%d",i,stk[i]);
        }

int main(){

    for(;;){
        printf("\nEnter your choise:\n 1.PUSH\n 2. POP\n 3.Exit");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            dafault:
            return 0;

        }
    }

return 0;
}