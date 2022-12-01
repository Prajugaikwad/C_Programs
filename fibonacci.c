
#include<stdio.h>
void Fibonacci(int n)
{
    int  firstNo = 0, secondNo = 1, lastNo;
    for(int i=1; i<=n ;i++)
    {
        lastNo = firstNo + secondNo;
        firstNo = secondNo;
        secondNo = lastNo ;
    }
    printf("%d",lastNo);

}

int main()
{
    int value = 0;
    //int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&value);

    Fibonacci(value);
    //printf("Fibonacci num of given number is : %d",iRet);

    return 0;
}