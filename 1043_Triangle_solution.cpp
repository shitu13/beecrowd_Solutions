


#include<stdio.h>
main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b) printf("Perimetro = %.1lf\n", a+b+c);
    else printf("Area = %.1lf\n", (a+b)*c/2);
}