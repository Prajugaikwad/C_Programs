#include<stdio.h>
int main()
    {
        char ch ='A';

        int i = 11;
        float f = 9.09;
        double d = 89.9078;

        char *cp = &ch;
        int *ip = &i;
        float *fp = &f;
        double *dp = &d;
         
         printf("value of ch : %c\n",ch);
         printf("address of ch : %p\n",&ch);
         printf("value inside cp : %p\n",cp);
         printf("data refer by cp : %c\n",*cp);
         
         void *vp = &ch;
         printf("size of ch : %d\n",sizeof(ch));
         printf("size of cp : %d\n",sizeof(cp));

         printf("data refer by vp:%c\n",*(char *)vp);
        return 0;


    }
