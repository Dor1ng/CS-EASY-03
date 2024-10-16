#include <stdio.h>
#include <stdlib.h>




void function() {
    int localVar = 20;
    int number = 30;
    int *ptr = &number;
}

int main() {
    int localVarMain = 50;
    
    const int constValue = 100;
    const char* constString = "Hello, World!";
    int globalVar = 10;
    
    static int staticVar = 40;
    
    function();
    
    return 0;
    //具体解释请见explanation.md
}