#include <stdio.h>

int main() {
// กำหนดค่าเริ่มต้น
float x = 10.0;
int y = 3, z = 2, a = 4;
float total = 100;
int price = 5, quantity = 10, discount = 20;
float rate = 10;
int score = 100, penalty = 5, mistake = 2;

// ตัวแปรสำหรับเก็บผลลัพธ์แบบเต็ม
float x_full;
float total_full;
int score_full;

// ตัวแปรสำหรับเก็บผลลัพธ์แบบย่อ
float x_short;
float total_short;
int score_short;

// คำนวณแบบเต็ม
x_full = x;
x_full = x_full - 4.0;
x_full = 6.5 * x_full;
x_full = (int)x_full % (y + z * a); // ใช้ casting เพราะ % ใช้กับจำนวนเต็ม
x_full = x_full / (2.0 * x_full);
total_full = total + (price * quantity - discount);
x_full = x_full * (1 + rate / 100);
score_full = score - (penalty * (mistake + 1));

// คำนวณแบบย่อ
x_short = x;
x_short -= 4.0;
x_short *= 6.5;
x_short = (int)x_short % (y + z * a); // ใช้ casting เพราะ % ใช้กับจำนวนเต็ม
x_short /= (2.0 * x_short);
total_short = total;
total_short += (price * quantity - discount);
x_short *= (1 + rate / 100);
score_short = score;
score_short -= (penalty * (mistake + 1));

// แสดงผลลัพธ์
printf("ผลลัพธ์แบบเต็ม:\n");
printf("x: %.2f, total: %.2f, score: %d\n", x_full, total_full, score_full);

printf("\nผลลัพธ์แบบย่อ:\n");
printf("x: %.2f, total: %.2f, score: %d\n", x_short, total_short, score_short);

// ตรวจสอบว่าผลลัพธ์เหมือนกันหรือไม่
printf("\nผลลัพธ์เหมือนกันหรือไม่?\n");
printf("x: %s, total: %s, score: %s\n",
(x_full == x_short) ? "ใช่" : "ไม่ใช่",
(total_full == total_short) ? "ใช่" : "ไม่ใช่",
(score_full == score_short) ? "ใช่" : "ไม่ใช่");

return 0;
}
