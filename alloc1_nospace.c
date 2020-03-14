// allocation is too big to fit
#include <assert.h>
#include <stdlib.h>
#include "heapAlloc.h"
#include <stdio.h>

int main() {
    assert(initHeap(4096)  == 0);
    assert(allocHeap(1)    != NULL);
    printf("%s" , "second allocation\n");
    assert(allocHeap(4095) == NULL);
    printf("%s" , "Passed\n");

    exit(0);
}
