/*
 * Студент: Пылинский Даниил Максимович
 * Группа: ПИ 1-1
 * Назначение: вычисление площади и периметра прямоугольника
 */

#include <stdio.h>

int main(void)
{
    double a, b;
    double area, perimeter;

    printf("Введите длину и ширину: ");
    scanf("%lf %lf", &a, &b);

    area = a * b;
    perimeter = 2.0 * (a + b);

    printf("========================================\n");
    printf("         ПАРАМЕТРЫ ПРЯМОУГОЛЬНИКА       \n");
    printf("========================================\n");
    printf("Длина:\t\t %.2lf\n", a);
    printf("Ширина:\t\t %.2lf\n", b);
    printf("Площадь:\t %.2lf\n", area);
    printf("Perimeter:\t %.2lf\n", perimeter);
    printf("========================================\n");
    printf("Расчёт завершён успешно\n");

    return 0;
}