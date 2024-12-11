// Stack using array


#include<stdio.h>
#include<stdio.h> 
#define SIZE 10
void push(int item);
void pop();
void display();
int stack[SIZE];
int top=-1;

void main()
{
int value,choice;
while(1)
{
printf("\n**********Menu**********\n");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("Enter your choices:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter the value to be inserted\n");
scanf("%d",&value);
push(value);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\n wrong selection");
}}}
void push(int item)
{
if(top==(SIZE-1))
{
printf("stack is fullin");
}
else{
top++;
stack[top]=item;
printf("The element pushed is:%d\n",stack[top]);
}}
void pop()
{
if(top==-1){
printf("stack is empty cannot pop any elements\n");
}
else{
printf("The element that is poped is %d\n",stack[top]);
top--;
}}
void display(){
if(top==-1){
printf("the stack is empty cannot display the elements\n");
}
else{
for(int i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}}}
