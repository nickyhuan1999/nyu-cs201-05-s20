#include <stdio.h>

int main()
{
    char str[] = "Hello";
    char* ptr = str;

    //while(ptr != NULL) {
    while(*ptr != NULL) {
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}
