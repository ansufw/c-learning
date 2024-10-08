#include <stdio.h>
#include "functions.h"

int main(void) {
    start();

    int number = 5;

    printf("The square root is %d\n", squareRoot(number));

    end();
}