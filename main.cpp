#include <stdio.h>
#include <stdlib.h>
#include "char2bytes.h"
#include "config.h"
#include <math.h>
#include "cryptoTools.h"
int encrypt(){
    char msg[20];
    scanf("%s",msg);
    int len = strlen(msg);
    BYTE arr[len];
    string2ByteArray(msg,arr);
    int i;
    for(i=0;i<len;i++){
        double emsg = crypto(privatekey,arr[i]);
        printf("%lf \n",emsg);
    }
}
int decrypt(int len){
    int i;
    for(i=0;i<len;i++){
        decrypto(getchar(),privatekey);
    }
}
int main(){
}
