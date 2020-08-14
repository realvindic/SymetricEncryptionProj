def prime(num):
    i = 1;
    times = 1;
    primeset = [""] * (num + 1);
    for i in range(1,(num + 1)):
        if(num % i ==0):
            if(i % 2 !=0):
                times = times + 1;
                primeset[times] = i;
    return(primeset);
print(prime(25));
