#include<stdio.h> 
#include<string>
#include<ctype.h>
#define ss 20
char infix[20], res[20], mstack[20];
int top ;
void push(char x){
if(top == ss-1)
printf("Stack is full \n") ;
else{
top++;
mstack[top] = x ;
}
}
char pop(){
if(top == -1) return -1 ;
else{
return (mstack[top--]) ;
}
}
void reverse(char *s, int begin, int end){
char x ;
if(begin >= end)
return;
while(begin x = *(s+begin) ;
*(s+begin) = *(s+end) ;
*(s+end) = x ;
++begin ; --end;
}
}
void postfixconversion(char infix[]){
int i=0, j=0;
for(i=0; infix[i]!='\0'; i++){
if(isdigit(infix[i]) || isalpha(infix[i])) res[j++] = infix[i] ;
else{
switch(infix[i]){
case ')': push(infix[i]) ;
break ;
case '(': while(mstack[top]!=')') res[j++] = pop() ;
pop();
break ;
case '*':
case '/': while(mstack[top]=='$') res[j++] = pop() ;
push(infix[i]) ;
break;
case '+':
case '-': while(mstack[top]=='$'||mstack[top]=='*'||mstack[top]=='/') res[j++] = pop() ;
push(infix[i]) ; break;
}
}
}
while(top >-1) res[j++] = pop() ;
res[j] = '\0';
printf("\n Postfix Expression : %s", res) ;
reverse(res,0,strlen(res)-1) ;
printf("\n Prefix Expression : %s", res) ;
}
int main(){ top = -1 ;
printf("Enter the Infix \n") ; scanf("%s", infix) ;
reverse(infix, 0, strlen(infix)-1) ;
printf("Reversed Infix : %s", infix) ;
postfixconversion(infix) ;
return 0 ;
}



