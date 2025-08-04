#include <stdio.h>

int main() {
    double x1 = 10.0, x2 = 10.0, a1 = 8.0, a2 = 8.0;
    int y = 2, z = 3;
    double total1 = 100.0, total2 = 100.0;
    double price = 20.0, quantity = 2.0, discount = 5.0;
    double rate = 10.0;
    double score1 = 80.0, score2 = 80.0;
    double penalty = 2.0;
    int mistake = 1;

    // 1. x = x - 4.0;  a -= 4.0;
    x1 = x1 - 4.0; // แบบเต็ม
    a2 -= 4.0;     // แบบย่อ
    printf("1. x1 = x1 - 4.0; x1 = %.2f                                           | a2 -= 4.0; a2 = %.2f\n", x1, a2);

    // 2. x = 6.5 * x;  x *= 6.5;
    x1 = 6.5 * x1; // แบบเต็ม
    x2 *= 6.5;     // แบบย่อ
    printf("2. x1 = 6.5 * x1; x1 = %.2f                                          | x2 *= 6.5; x2 = %.2f\n", x1, x2);

    // 3. x = x % (y + z * a);  x %= (y + z * a);
    int xi1 = 20, xi2 = 20, ai = 2;
    xi1 = xi1 % (y + z * ai); // แบบเต็ม
    xi2 %= (y + z * ai);      // แบบย่อ
    printf("3. xi1 = xi1 %% (y + z * ai); xi1 = %d                                  | xi2 %%= (y + z * ai); xi2 = %d\n", xi1, xi2);

    // 4. x = x / (2.0 * x);  x /= (2.0 * x);
    x1 = x1 / (2.0 * x1); // แบบเต็ม
    x2 /= (2.0 * x2);     // แบบย่อ
    printf("4. x1 = x1 / (2.0 * x1); x1 = %.2f                                    | x2 /= (2.0 * x2); x2 = %.2f\n", x1, x2);

    // 5. total = total + (price * quantity - discount);  total += (price * quantity - discount);
    total1 = total1 + (price * quantity - discount); // แบบเต็ม
    total2 += (price * quantity - discount);         // แบบย่อ
    printf("5. total1 = total1 + (price * quantity - discount); total1 = %.2f   | total2 += (price * quantity - discount); total2 = %.2f\n", total1, total2);

    // 6. x = x * (1 + rate / 100);  x *= (1 + rate / 100);
    x1 = x1 * (1 + rate / 100); // แบบเต็ม
    x2 *= (1 + rate / 100);     // แบบย่อ
    printf("6. x1 = x1 * (1 + rate / 100); x1 = %.2f                              | x2 *= (1 + rate / 100); x2 = %.2f\n", x1, x2);

    // 7. score = score - (penalty * (mistake + 1));  score -= (penalty * (mistake + 1));
    score1 = score1 - (penalty * (mistake + 1)); // แบบเต็ม
    score2 -= (penalty * (mistake + 1));         // แบบย่อ
    printf("7. score1 = score1 - (penalty * (mistake + 1)); score1 = %.2f        | score2 -= (penalty * (mistake + 1)); score2 = %.2f\n", score1, score2);

    return 0;
}

/*
คอมเมนต์อธิบาย:
- แบบเต็ม: เขียนนิพจน์เต็มรูปแบบ เช่น x = x - 4.0;
- แบบย่อ: ใช้ operator แบบย่อ เช่น x -= 4.0;
- ผลลัพธ์ทั้งสองแบบจะเหมือนกัน
*/