#include <stdio.h>

int main(int argc, char **argv) {
    printf("Arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf(" - '%s'\n", argv[i]);
    }
    printf("Hello world!\n");
    return 0;
}
