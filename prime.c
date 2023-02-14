#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
// printf("value of m:%d\n", m);
// printf("value of i:%d\n", i);
for(i=2;i<=m;i++){    
if(n%i==0){    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
 }    