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
    printf("1.섭씨에서 화씨온도로, 2.화씨에서 섭씨온도로: ");
    scanf("%d",&opt);

    if(opt==1)
    {
        printf("섭씨 온도 입력: ");
        scanf("%lf",&num);
        printf("화씨 온도: %f \n", CelToFah(num));
    }
    else if(opt==2)
    {
        printf("화씨 온도 입력: ");
        scanf("%lf",&num);
        printf("섭씨 온도: %f \n", FahToCel(num));
    }
    else
        printf("선택 오류\n");
    return 0;

}
