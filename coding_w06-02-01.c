#include <stdio.h>
int main() {
    int i = 1, j = 2, k; //ประกาศตัวแปรและกำหนดค่าเริ่มต้น
    printf("1. i = %d, j = %d, k = ไม่มีค่า\n", i, j); 

    k = i + j; //คำนวณ k = i + j
    printf("2. k = i + j = %d + %d = %d\n", i, j, k);
    printf(" i = %d, j = %d, k = %d\n", i, j, k);

    i = i + (k * j); //คำนวณ i = i + (k * j)
    printf("3. i = i + (k * j) = %d + (%d * %d) = %d\n", i - (k * j), k, j, i);
    printf(" i = %d, j = %d, k = %d\n", i, j, k);
    
    j = i / 2; //คำนวณ j = i / 2
    printf("4. j = i / 2 = %d / 2 = %d\n", i, j);
    printf(" i = %d, j = %d, k = %d\n", i, j, k);

    k = i % 2; //คำนวณ k = i % 2
    printf("5. k = i %% 2 = %d %% 2 = %d\n", i, k);
    printf(" i = %d, j = %d, k = %d\n", i, j, k);

    i = (j + k) * 3; //คำนวณ i = (j + k) * 3
    printf("6. i = (j + k) * 3 = (%d + %d) * 3 = %d\n", j, k, i);
    printf(" i = %d, j = %d, k = %d\n", i, j, k);
    return 0;
}
//1. ในโปรแกรมแรก (w06-02-01) เราใช้ตัวแปรประเภท int ทั้งหมด การหารด้วย 2 ในบรรทัดที่ 4 จะได้ผลลัพธ์เป็นจำนวนเต็ม (ไม่ทศนิยม)
//2. การใช้ operator % ในบรรทัดที่ 5 ใช้ได้กับ integer เท่านั้น