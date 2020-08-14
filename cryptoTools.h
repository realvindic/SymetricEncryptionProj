double crypto(double pkey,double msg){
    return(fmod(msg,pkey));
}
double decrypto(double final, double oper){
    fmod(final,oper);

}
