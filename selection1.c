#include<stdio.h>
#include<stdbool.h>
bool checkEven(int iNo)
{
 if((iNo % 2 ) == 0) //equality operator
 {
   return true;
 }
 else
 {
   return false;
 }
}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("Enter one number\n");
    scanf("%d",&iValue);
    if(bRet == true)
    {
        printf("it is even number\n");
    }
    else
    {
        printf("it is odd number\n");
    }
    return 0;
}