#include <stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3);
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result);

int main() {
    float x1, y1, x2, y2, x3, y3;
    int result;
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
    result = is_triangle(x1, y1, x2, y2, x3, y3);
    output(x1, y1, x2, y2, x3, y3, result);
    return 0;
}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x4, float *y4) {
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
    printf("Enter coordinates of third point (x4 y4): ");
    scanf("%f %f", x4, y4);
}

int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    
    return (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) != 0);
}

void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result)
        printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) form a triangle\n", x1, y1, x2, y2, x3, y3);
    else
        printf("The points (%.1f, %.1f), (%.1f, %.1f) and (%.1f, %.1f) do not form a triangle\n", x1, y1, x2, y2, x3, y3);
}
