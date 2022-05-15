#include<stdio.h>
#include<conio.h>
void main()
{
int a=10, b=20;
clrscr();
printf("%d",(a>b)?a:b);
getch();
}


***************************************************Find marriage status******************************
#include<stdio.h>  
#include<string.h>  
int main()  
{  
    int age;
    char status;
    printf("Enter the age: ");
    scanf("%d",&age);
    status = (age>22) ? 'M': 'U';  
    if(status == 'M')  
    printf("Married");  
    else  
    printf("Unmarried");  
    return 0;  
}     
