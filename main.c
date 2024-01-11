#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int value = one_argu(1);
    printf("Result is %d:",value);
    return 0;
}

int __stdcall one_argu(int one){
    printf("one argument func\n");
    int a = 2;
    return one +a;
}