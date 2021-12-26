#include <stdio.h>

int message(){
    printf("Suck my dick, you son of a bitch");
    return 0;
}
int calsum(int x,int y,int z){
    int sum = x+y+z;
    return sum;
}

int main(){
    int a,b,c,sum;
    printf("Enter any three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    sum = calsum(a,b,c);
    printf("Sum: %d\n",sum);
    return 0;
}
