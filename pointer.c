#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("value of a= %d\n",a);
    printf("value of a=%d\n",*p);
    printf("value of a= %d\n",*(&a));
    printf("address of a=%u\n",&a);
    printf("address of a=%u\n",p);
    printf("address of pointer p=%u\n",&p);
    return 0;
}