#include <stdio.h>
//size of sizeof(arr) = 8 while sizeof(arr[0]) = 4 and thats why only 2 variables are being printed

void printArray(int arr[])
{
    int i;
    //int arr_size = sizeof(arr) / sizeof(arr[0]);
    int arr_size = 20 / sizeof(arr[0]);
    for (i = 0; i < arr_size; i++)
        printf("%d\n", arr[i]);
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    printArray(arr);
    return 0;
}
