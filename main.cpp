#include <stdio.h>
#include <stdlib.h>
#include "cryptoTools.h"
#include "char2bytes.h"
int encrypt(char *msg,int len){
    int i;
    for(i=0;i<len;i++){
        printf("%lf - %d\n",crypto(msg[i]),msg[i]);
    }
}
int decrypt(char *emsg,int len){
    int i;
    for(i=0;i<len;i++){
        decrypto(emsg[i]);
    }
}
int main(){
    printf("ecnrypt or decrypt");
    if(getchar() == "encrypt"){
        char text[20];
        scanf("%s",text);
        int len = strlen(text);
        BYTE arr[len];
        int i;
        string2ByteArray(text,arr);
        encrypt(text,len);
        //gitKrakin test//
}else{
    int len;
    scanf(" enter in how many words:%d",len);
    int i;
    for(i=0;i<len;i++){
        decrypto(getchar());
    }
}
}
