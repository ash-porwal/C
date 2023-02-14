#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 3)
    {
     
    printf("The value of i++ is %d\n", i++); // here if we write i++ and at the same time we are 
    printf("The value of ++i is %d\n", ++i); // here if we write i++ and at the same time we are 
    printf("The value of i is %d\n", i);       //  printing i++ then it will give the same value of i.. 
    }
    
    return 0;                              //   but if u want the addition value of i at the same time the write ++i instead of i++
}
/* i++ ---> means phle print karo fir increment karo
   ++i ---> means phle increment karo fir print karo 
    if we write like i+= 10; it means i will increase by 10 ..
    like if value of i is 5 then it will be 15 after i+=10  */