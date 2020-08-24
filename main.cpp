#include <stdio.h>
#include <stdlib.h>
#include "cryptoTools.h"
#include "char2bytes.h"
int encrypt(char *msg,int len){
    int i;
    for(i=0;i<len;i++){
        printf("%lf - %d\n",crypto(msg[i]),msg[i]);
        double dmsg = decrypto(crypto(msg[i]));
        printf("%lf \n",dmsg);
    }
}
int decrypt(char *emsg,int len){
    int i;
    for(i=0;i<len;i++){
        decrypto(emsg[i]);
    }
}
int main(){
    char text[20];
    scanf("%s",text);
    int len = strlen(text);
    BYTE arr[len];
    int i;
    string2ByteArray(text,arr);
    encrypt(text,len);
}
