#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int num1 = 56; 
    int num2 = 98; 
    int result = ucln(num1, num2);
    printf("UCLN cua %d va %d la: %d\n", num1, num2, result);

    return 0;
}

