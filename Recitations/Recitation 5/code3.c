#include <stdio.h>
#include <stdlib.h>
//while(1) is an infintre while loop that constantly calls foo()

void foo() {
    int* ptr = (int*)malloc(sizeof(int) * 10000000);
    for(int i = 0; i < 10000000; i++)
        ptr[i] = i;
    exit(0);
}

int main(int argc, char* argv[]) {
    int* arr = (int*)malloc( sizeof(int) *10000000 );
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Size of array: %ld\n", sizeof(arr));
    for(int i=0;i<100;i++)
        arr[i] = i;

    while(1){
        foo();
    }

    return 0;
}
