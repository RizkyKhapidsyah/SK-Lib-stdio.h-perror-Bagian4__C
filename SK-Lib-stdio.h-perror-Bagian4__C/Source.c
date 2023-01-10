#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* f = fopen("non_existent", "r");

    if (f == NULL) {
        perror("fopen() failed");
    } else {
        fclose(f);
    }

    _getch();
    return 0;

}