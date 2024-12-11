// a) Factorial of a number

#include<stdio.h>
int fact(int);
int main()
{
int n,f;
printf("enter the number whose factorial you want to calculate?");
scanf("%d",&n);
f=fact(n);
printf("factorial=%d",f);
}
int fact(int n)
{
if (n==0)
{
return 0;
}
else if(n==1){
return 1;
}
else {
return n*fact(n-1);
}
}


// b) BINARY SEARCH


#include<stdio.h>
int binarysearch(int array[],int x,int low, int high)
{
if (high>=low){
int mid=low+(high-low)/2;

if(array[mid]==x)
return mid;


if(array[mid]>x){
return binarysearch(array,x,low,mid-1);
}
else{
return binarysearch(array,x,mid+1,high);
}
}
return -1;
}
int main(void){
int array[]={3,4,5,6,7,8,9};
int n=sizeof(array)/sizeof(array[0]);
int x=4;
int result=binarysearch(array,x,0,n-1);
if(result==-1)
{
printf("not found");
}
else{
printf("element is found at index %d",result);
}
}

// c) TOWER OF HANOI

#include<stdio.h>
void towerofhonai(int n,char from_rod ,char to_rod,char aux_rod){
if(n==1){
printf("\n move disk 1 from_rod %c to_rod %c ",from_rod,to_rod);
return ;
}
towerofhonai(n-1, from_rod,aux_rod,to_rod);
printf("\n move disk %d from_rod %c to_rod %c",n,from_rod,to_rod);
towerofhonai(n-1,aux_rod,to_rod,from_rod);
}
int main(){
int n=1;
towerofhonai(n,'A','B','C');
return 0;

}
