#include <stdio.h>
#include <stdint.h>

int main(void)
{
    typedef int8_t Int8;
    typedef int16_t Int16;
    typedef int32_t Int32;

    printf("Size of int8:  %lu byte  (%lu bits).\n", (unsigned long) sizeof(Int8), (unsigned long) (sizeof(Int8) * 8));
    printf("Size of int16: %lu bytes (%lu bits).\n", (unsigned long) sizeof(Int16), (unsigned long) (sizeof(Int16) * 8));
    printf("Size of int32: %lu bytes (%lu bits).\n", (unsigned long) sizeof(Int32), (unsigned long) (sizeof(Int32) * 8));

    return 0;
}