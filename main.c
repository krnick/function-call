#include <stdio.h>

int main() {
    printf("One argument function call!\n");
    int value1 = std_one_argu(1);
    int value2 = cdecl_one_argu(1);
    int value3 = fastcall_one_argu(1);

    printf("Two argument function call!\n");
    int value4 = std_two_argu(1, 2);
    int value5 = cdecl_two_argu(1, 2);
    int value6 = fastcall_two_argu(1, 2);

    printf("Three argument function call!\n");
    int value7 = std_three_argu(1, 2, 3);
    int value8 = cdecl_three_argu(1, 2, 3);
    int value9 = fastcall_three_argu(1, 2, 3);


    return 0;
}

int __stdcall std_one_argu(int one) {
    printf("stdcall 1 argument func\n");
    int a = 2;
    return one + a;
}

int __cdecl cdecl_one_argu(int one) {
    printf("cdecl 1 argument func\n");
    int a = 2;
    return one + a;
}

int __fastcall fastcall_one_argu(int one) {
    printf("fastcall 1 argument func\n");
    int a = 2;
    return one + a;
}

//Two
int __stdcall std_two_argu(int one, int two) {
    printf("stdcall 2 argument func\n");
    int a = 2;
    return one + two + a;
}

int __cdecl cdecl_two_argu(int one, int two) {
    printf("cdecl 2 argument func\n");
    int a = 2;
    return one + two + a;
}

int __fastcall fastcall_two_argu(int one, int two) {
    printf("fastcall 2 argument func\n");
    int a = 2;
    return one + two + a;
}

//Three
int __stdcall std_three_argu(int one, int two, int three) {
    printf("stdcall 3 argument func\n");
    int a = 2;
    return one + two + three + a;
}

int __cdecl cdecl_three_argu(int one, int two, int three) {
    printf("cdecl 3 argument func\n");
    int a = 2;
    return one + two + three + a;
}

int __fastcall fastcall_three_argu(int one, int two, int three) {
    printf("fastcall 3 argument func\n");
    int a = 2;
    return one + two + three + a;
}