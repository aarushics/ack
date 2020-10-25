#include <stdio.h>

int main()
{
    int x, p;
    printf("enter x:");
    scanf("%d",&x);
     p = ((((3*x+2)*x -5)*x -1)*x +7)*x -6; 
    printf("P(X) = %d\n",p);
    return 0;
}