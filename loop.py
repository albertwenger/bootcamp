import time

x=0
start = time.clock()
for i in xrange(1,1001):
    x = x + i;
elapsed = (time.clock() - start)
print x, elapsed
