#include "config.h"
#include <math.h>
double crypto(double msg)
{
    if(fmod(msg,2) == 0){
        msg = msg + 1;
    }
    double ebytes = privatekey*msg;
    return(ebytes);
}
double decrypto(double msg){
    return(msg / privatekey);
}
