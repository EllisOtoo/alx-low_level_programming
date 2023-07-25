#include "main.h"
#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int n = 402;
    reset_to_98(&n);
    return 0;
}
    
