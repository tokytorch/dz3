#include <stdio.h>
#include <locale.h>

int main() 
{

    setlocale(LC_ALL, "RUS");
    
    const double LIGHTYEAR = 63241.1; 

    double light_years;
    double astronomical_units;

    printf("Программа пересчета световых лет в астрономические единицы\n");
    printf("=========================================================\n");
    printf("Введите расстояние в световых годах: ");
    scanf("%lf", &light_years);

    if (light_years < 0) {
        printf("Ошибка: расстояние не может быть отрицательным!\n");
        return 1;
    }

    astronomical_units = light_years * LIGHTYEAR;

    printf("\nРезультат пересчета:\n");
    printf("%.2f световых лет = %.2f астрономических единиц\n",
        light_years, astronomical_units);

}
