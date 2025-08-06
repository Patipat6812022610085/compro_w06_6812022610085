#include <stdio.h>

int main() {
// กำหนดค่าเริ่มต้น
int a = 5, b = 2;
float x = 3.0, y = 4.5;

// คำนวณนิพจน์
int r1 = a++ * b + (int)y % 3;
int r2 = (a > b) && ((int)x / b < 2);
float r3 = ++x * y - a / 2;
float r4 = ((x += 1.5) > y) || (b-- > 0);

// แสดงผลลัพธ์
printf("r1 = a++ * b + (int)y %% 3 = %d\n", r1);
printf("r2 = (a > b) && ((int)x / b < 2) = %d\n", r2);
printf("r3 = ++x * y - a / 2 = %.2f\n", r3);
printf("r4 = ((x += 1.5) > y) || (b-- > 0) = %.2f\n", r4);

// แสดงค่าปัจจุบันของตัวแปรหลังคำนวณ
printf("\nค่าปัจจุบันของตัวแปร:\n");
printf("a = %d, b = %d, x = %.2f, y = %.2f\n", a, b, x, y);

return 0;
}
