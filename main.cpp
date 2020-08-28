#include <stdio.h>
#include <stdlib.h>
#include "cryptoTools.h"
#include <string>
int main(){
    char text[200];
    double range = 126;
    scanf("%s",text);
    int len = strlen(text);
    BYTE arr[len];
    string2ByteArray(text,arr);
    int i;
    for(i=0;i<len;i++){
        printf("dec : %lf \n",demixer(decrypto((crypto(arr[i]))),range));
        printf("Origin: %d \n",arr[i]);
    }
}
