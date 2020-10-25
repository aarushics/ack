#include <stdio.h>

int main()
{
    int x, p;
    printf("enter x:");
    scanf("%d",&x);
     p = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6; 
    printf("P(X) = %d\n",p);
    return 0;
}