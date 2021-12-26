#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 3;
    int *alpha = &i;
    char *ch = &i;
    float *s = &i;
    printf("alpha = %d\n",alpha);
    printf("ch = %c\n",ch);
    printf("s = %f\n",s);
    printf("*alpha = %d\n",*alpha);
    printf("*ch = %c\n",*ch);
    printf("*s = %f\n",*s);
    //printf("Address of i in octal= %o\n",&i);
    //printf("Address of i in hexadicemal= %x\n",&i);
    //printf("Address of i in unsigned= %u\n",&i);
    //printf("Value of i in octal= %o\n",i);
    //printf("Value of i in hexadecimal = %x\n",i);
    //printf("Value of i in integer= %u\n",i);
    //printf("Value of i in integer= %d\n",*(&i));
    return 0;
}
