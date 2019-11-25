#include <stdio.h>

#define __DEBUG__

#ifdef __DEBUG__
#define DEBUG(format,...) printf("File: "__FILE__", Line: %05d: "format"\n", __LINE__, ##__VA_ARGS__)
#else
#define DEBUG(format,...)
#endif

int main(int argc, char **argv) {
    char str[]="Hello World";
    DEBUG("A ha, check me: %s",str);
    printf("File: "__FILE__", Line: %05d: A ha, check me: %s\n", __LINE__, str);
    while(1);
    return 0;
}
