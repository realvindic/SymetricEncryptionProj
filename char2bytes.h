#include <stdio.h>
#include <string.h>

typedef unsigned char BYTE;

//function to convert string to byte array
void string2ByteArray(char* input, BYTE* output)
{
    int loop;
    int i;
    loop = 0;
    i = 0;
    while(input[loop] != '\0')
        {
    output[i++] = input[loop++];
        }
}
