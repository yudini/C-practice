#include <stdio.h>

double CelToFah(double c)
{
    return 1.8*c+32;
}
double FahToCel(double f)
{
    return (f-32)/1.8;
}

int main(void)
{
    int opt;
    double num;
    printf("1.¼·¾¾¿¡¼­ È­¾¾¿Âµµ·Î, 2.È­¾¾¿¡¼­ ¼·¾¾¿Âµµ·Î: ");
    scanf("%d",&opt);

    if(opt==1)
    {
        printf("¼·¾¾ ¿Âµµ ÀÔ·Â: ");
        scanf("%lf",&num);
        printf("È­¾¾ ¿Âµµ: %f \n", CelToFah(num));
    }
    else if(opt==2)
    {
        printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
        scanf("%lf",&num);
        printf("¼·¾¾ ¿Âµµ: %f \n", FahToCel(num));
    }
    else
        printf("¼±ÅÃ ¿À·ù\n");
    return 0;

}
