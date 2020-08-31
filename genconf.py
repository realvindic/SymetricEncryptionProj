import matplotlib.pyplot as plt
import random
import numpy
import numbers
import os
import math
import time
t = time.localtime();
#convert to float                                                                       
def Float2(d):
    ds = str(d);
    d = float(str(ds.replace("]","").replace("[","").replace("-","")));
    return(d);
#gnerate random points
def randomPoint(a,b):
    y = random.randint(-100,100)
    roots = numpy.roots([1, 0, a, b - y**2])
    roots = [val.real for val in roots if val.imag == 0]
    x = random.choice(roots)
    return [x];
#tapdoor function;
def trapdoor(a,b):
    cs = str(a);
    c = float(str(cs.replace("]","").replace("[","").replace("-","")));
    ds = str(b);
    d = float(str(ds.replace("]","").replace("[","").replace("-","")));
    return(d ** c);
#write keys
def write4(skey):
    with open("config.h","a") as f:
        f.write("double privatekey");
        f.write(" = ");
        f.write(str(Float2(skey)));
        f.write(";");

i = 0;
test = [20,30,40];
ii = 0;
random.seed(t);
x = [randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random())];
y = [randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random()),randomPoint(random.random(),random.random())];
enc = [""] * 100;
def traploop(enc,x,y):
    for i in range(0,2):
        if(i > 1):
            enc[i] = (enc[i - 1] + trapdoor(x[i],y[i+1]));
        else:
            enc[i] = trapdoor(x[i],x[i + 1]);
    return(enc);
print(trapdoor(y[i],x[i]));
traploop(enc,x,y);
plt.plot(x,y,y);
plt.show()
input();
os.system("clear");
print("priavte key ",enc[1]);
input();
os.system("clear");
write4(enc[1]);
