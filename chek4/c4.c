#include <stdio.h>

int main() {
    
    const double LIGHTYEAR = 63241.1; 

    double light_years;
    double astronomical_units;

    printf("��������� ��������� �������� ��� � ��������������� �������\n");
    printf("=========================================================\n");
    printf("������� ���������� � �������� �����: ");
    scanf("%lf", &light_years);

    if (light_years < 0) {
        printf("������: ���������� �� ����� ���� �������������!\n");
        return 1;
    }

    astronomical_units = light_years * LIGHTYEAR;

    printf("\n��������� ���������:\n");
    printf("%.2f �������� ��� = %.2f ��������������� ������\n",
        light_years, astronomical_units);

}