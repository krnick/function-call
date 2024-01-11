#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int value1 = std_one_argu(1);
    int value2 = cdecl_one_argu(1);
    int value3 = fastcall_one_argu(1);
    return 0;
}

int __stdcall std_one_argu(int one){
    printf("stdcall one argument func\n");
    int a = 2;
    return one +a;
}

int __cdecl cdecl_one_argu(int one){
    printf("cdecl one argument func\n");
    int a = 2;
    return one +a;
}

int __fastcall fastcall_one_argu(int one){
    printf("fastcall one argument func\n");
    int a = 2;
    return one +a;
}
