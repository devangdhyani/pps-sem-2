#include <stdio.h>
#include <string.h>
int sum ();
void main()
{
    int result ;
    printf ("\ngoing to calculaate the sum of two number :");
    result = sum();
    printf("%d,result");
}
int sum ()
{
    int a,b;
    printf ("\n enter two numbers");
    scanf("%d %d",&a,&b);
    return a+b;
}