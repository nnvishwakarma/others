import sys
num=int(sys.argv[1])

for a in range(1,num):
    pat=""
    for b in range(a):
            if b<10 :
                #pat=pat+str(b).zfill(2)
                pat=pat+"  "
            else:
                pat=pat+str(b)
    for c in range(num-a):
            if c<10 :
                #pat=pat+str(c).zfill(2)
                pat=pat+"  "
            else:
                pat=pat+str(c)
    """for d in range(a):
            if d<10 :
                #pat=pat+str(d).zfill(2)
                pat=pat+"  "
            else:
                pat=pat+str(d)"""
    for e in range(num-a):
            if e<10 :
                #pat=pat+str(e).zfill(2)
                pat=pat+"  "
            else:
                pat=pat+str(e)
    print(repr(pat).rjust(3*num-a))
