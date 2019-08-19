#include<conio.h>
#include<stdio.h>
#define stack_size 50
void push(int[],int *);
void pop(int[],int *);
int main()
{
   int stack[stack_size],ch,top=-1;
   do{
       printf("enter 1 to push\n");
       printf("enter 2 to pop\n");
       scanf("%d",&ch);
       switch(ch) {
	  case 1: push(stack,&top);
		  break;
	  case 2: pop(stack,&top);
		  break;
	}
    }while(ch==1||ch==2);
    return 0;
 }

 void push(int stack[stack_size],int *top) {
    int item;
    if(*top==stack_size) {
       printf("stack overflow\n");
    }
else {
    printf("enter the element\n");
    scanf("%d",&item);
    stack[++(*top)]=item;
    printf("this %d is pushed\n",item);
}
}
void pop(int stack[stack_size],int *top) {
    int item;
    if(*top==-1) {
       printf("stack underflow\n");
    }
else {
    item=stack[*top];
    (*top)--;
    printf("the popped element is %d\n",item);
}
}