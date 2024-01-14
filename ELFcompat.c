#include <stdio.h>

int one_argu(int one);
int two_argu(int one, int two);
int three_argu(int one, int two, int three);
void pointer_func(int *a, int *b, int *c);

int main() {
    printf("One argument function call!\n");
    int value1 = one_argu(1);

    printf("Two argument function call!\n");
    int value4 = two_argu(1, 2);

    printf("Three argument function call!\n");
    int value7 = three_argu(1, 2, 3);

    printf("Three argument pointer function call!\n");
    int v1 = 0, v2 = 0, v3 = 0;
    int *p1, *p2, *p3;
    p1 = &v1;
    p2 = &v2;
    p3 = &v3;

    printf("p1: %d \n", *p1);
    printf("p2: %d \n", *p2);
    printf("p3: %d \n", *p3);
    pointer_func(p1, p2, p3);
    printf("p1: %d \n", *p1);
    printf("p2: %d \n", *p2);
    printf("p3: %d \n", *p3);

    return 0;
}

int one_argu(int one) {
    printf("stdcall 1 argument func\n");
    int a = 2;
    return one + a;
}

//Two
int two_argu(int one, int two) {
    printf("stdcall 2 argument func\n");
    int a = 2;
    return one + two + a;
}

//Three
int three_argu(int one, int two, int three) {
    printf("stdcall 3 argument func\n");
    int a = 2;
    return one + two + three + a;
}

// pointer
void pointer_func(int *a, int *b, int *c) {
    *a += 1;
    *b += 2;
    *c += 3;
}
