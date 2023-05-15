#include <stdio.h>
#include <conio.h>

void subtract ();
void main (){
    subtract ();
}
void subtract ()
{
    int a,b,c;
    printf ("enter two values\n");
    printf ("enter the first numbers\n");
    scanf ("%d,&a");
    printf ("first number is %d\n",a);
    printf ("enter the second number\n");
    scanf ("%d,&b");
    printf ("second number is %d\n",b);
    c=a-b;
    printf ("result is %d\n",c);
    return 0;
}