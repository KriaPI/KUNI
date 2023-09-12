#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <windows.h>
#include <uchar.h>


int main(void) {
    SetConsoleOutputCP(65001);
    printf("Hallå värld + 2!\n");

    exit(EXIT_SUCCESS);
}