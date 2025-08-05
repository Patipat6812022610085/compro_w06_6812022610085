#include <stdio.h>
int main() {
    int a=5, b = 17;
    float c = 8.5, d = 4.0;
    printf("1. a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);
    printf("2. d + a = %.1f\n",d + a);
    printf("3. a - b = %d\n",a - b);
    printf("4. c * d = %.1f\n",c * d);
    printf("5. a * c = %.1f\n",a * c);
    printf("6. c / d = %.2f\n",c / d);
    printf("7. b / c = %.2f\n",b / c);
    printf("8. a %% b = %d\n",a % b);
    printf("9. c %% a is invalid for float type\n");
    printf("4. c %% d is invalid for float type\n");
    return 0;
}
//3 กำนดตัวแปร a,b จำนวนเต็ม
//4 กำหนดตัวแปร c,d ทศนิยม
//5 แสดงตัวแปร a,b,c,d
//6 การบวกระหว่าง float และ int จะได้ผลลัพธ์เป็น float
//7 การลบระหว่าง int ทั้งคู่ได้ผลลัพธ์เป็น int
//8 การคูณระหว่าง float ทั้งคู่ได้ผลลัพธ์เป็น float
//9 การคูณระหว่าง int และ float ได้ผลลัพธ์เป็น float
//10 การหารระหว่าง float ได้ผลลัพธ์เป็น float
//11 การหารระหว่าง int และ float ได้ผลลัพธ์เป็น float
//12 การหาเศษส่วนใช้ได้กับ int เท่านั้น ได้ผลลัพธ์เป็นเศษจากการหาร
//13 การหาเศษส่วนใช้ได้กับ int เท่านั้น
//14 การหาเศษส่วนใช้ได้กับ int เท่านั้น