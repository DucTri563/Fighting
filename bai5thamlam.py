A = [1,3,8,7,3]
B = []
n = len(A)
for i in range (n):
    B[i] = A[i+1]
    B[n-1] = A[n-2]
    
print(B)
    
