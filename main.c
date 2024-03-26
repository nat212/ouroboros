#include <stdio.h>

int main(int argc, char *argv[])
{
    char* program = argv[0];
    printf("Consuming %s\n", program);
    if (remove(argv[0]) == 0) {
        printf("Consumed %s\n", program);
    } else {
        printf("Unable to consume %s\n", program);
    }
    return 0;
}
