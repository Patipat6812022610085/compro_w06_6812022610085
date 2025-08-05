#include <stdio.h>
int main() {
    int a=5, b = 17;
    float c = 8.5, d = 4.0;
    printf("1. a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);
    printf("2. d + a = %.1f\n",d + a);
    printf("3. a - b = %d\n",a - b);
    printf("4. c * d = %.1f\n",c * d);
    printf("5. a * c = %.1f\n",a * c);
    printf("6. c / d = %d\n",c / d);
    printf("7. b / c = %.2f\n",b / c);
    printf("8. a %% b = %d\n",a % b);
    printf("9. c %% a is invalid for float type\n");
    printf("4. c %% d is invalid for float type\n");
    return 0;
}
