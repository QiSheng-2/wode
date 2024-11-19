#include <stdio.h>
#include <stdbool.h>

// 判断是否能组成三角形
bool is_triangle(int a, int b, int c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// 判断是否为直角三角形
bool is_right_triangle(int a, int b, int c)
{
    return (a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a);
}

// 判断是否为锐角三角形
bool is_acute_triangle(int a, int b, int c)
{
    return (a * a + b * b > c * c) && (a * a + c * c > b * b) && (b * b + c * c > a * a);
}

// 判断是否为钝角三角形
bool is_obtuse_triangle(int a, int b, int c)
{
    return (a * a + b * b < c * c) || (a * a + c * c < b * b) || (b * b + c * c < a * a);
}

// 判断是否为等腰三角形
bool is_isosceles_triangle(int a, int b, int c)
{
    return (a == b) || (a == c) || (b == c);
}

// 判断是否为等边三角形
bool is_equilateral_triangle(int a, int b, int c)
{
    return a == b && b == c;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (!is_triangle(a, b, c))
    {
        printf("Not triangle\n");
    }
    else
    {
        if (is_right_triangle(a, b, c))
        {
            printf("Right triangle\n");
        }
        if (is_acute_triangle(a, b, c))
        {
            printf("Acute triangle\n");
        }
        if (is_obtuse_triangle(a, b, c))
        {
            printf("Obtuse triangle\n");
        }
        if (is_isosceles_triangle(a, b, c))
        {
            printf("Isosceles triangle\n");
        }
        if (is_equilateral_triangle(a, b, c))
        {
            printf("Equilateral triangle\n");
        }
    }

    return 0;
}