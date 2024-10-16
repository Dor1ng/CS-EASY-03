#include <stdio.h>
#include <stdlib.h>

const int constValue = 100;
const char* constString = "Hello, World!";
int globalVar = 10;

void function(int arg) {
    int localVar = 20;
    int *ptr = malloc(sizeof(int));
    *ptr = 30;
    free(ptr);
}

int main() {
    static int staticVar = 40;
    int localVarMain = 50;
    function(60);
    return 0;
}