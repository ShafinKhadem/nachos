#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv)
{
    printf("From test_args_status:\n");
    int i;
    printf("%d arguments\n", argc);
    printf("argv = %d *argv = %d **argv = %d\n", argv, *argv, **argv);
    for (i=0; i<argc; i++)
        printf("arg %d: address = %d value = %s\n", i, argv[i], argv[i]);
    return 1;
}
