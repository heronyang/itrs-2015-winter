#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {

    int a = 1, b = 2, c;

    c = add(a, b);
    printf("c = %d\n", c);

    return 0;

}
