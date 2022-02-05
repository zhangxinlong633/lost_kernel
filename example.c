#include "memory.h"

int main(int argc, char **argv)
{
    void *buf = malloc(1024);
    if (buf == NULL) {
        goto exit;  
    }
    
    printf("malloc memory success\n");
    
exit:
    return 0;
}
