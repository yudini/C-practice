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
    printf("1.�������� ȭ���µ���, 2.ȭ������ �����µ���: ");
    scanf("%d",&opt);

    if(opt==1)
    {
        printf("���� �µ� �Է�: ");
        scanf("%lf",&num);
        printf("ȭ�� �µ�: %f \n", CelToFah(num));
    }
    else if(opt==2)
    {
        printf("ȭ�� �µ� �Է�: ");
        scanf("%lf",&num);
        printf("���� �µ�: %f \n", FahToCel(num));
    }
    else
        printf("���� ����\n");
    return 0;

}
