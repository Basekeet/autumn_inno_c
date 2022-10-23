with open("input.txt") as f:
    R, G, B = map(float, f.readline().split())
    
R, G, B = R/255, G/255, B/255
 
K = 1 - max(R, G, B)
C = (1-R-K)/(1-K)
M = (1-G-K)/(1-K)
Y = (1-B-K)/(1-K)
 
with open("output.txt", "w") as f:
    f.write(str(C) + ' ')
    f.write(str(M) + ' ')
    f.write(str(Y) + ' ')
    f.write(str(K))