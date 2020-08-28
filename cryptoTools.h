#include "config.h"
#include <math.h>
#include "char2bytes.h"
double crypto(double msg)
{
    if(fmod(msg,2) == 0){
        msg = msg + 127;
    }
    double ebytes = privatekey*msg;
    return(ebytes);
}
double decrypto(double msg){
    double dmsg = msg / privatekey;
    return(dmsg);
    
}
double demixer(double msg,double range){
    if(msg > range){msg = msg - 127;return(msg);}else{return(msg);}
}
