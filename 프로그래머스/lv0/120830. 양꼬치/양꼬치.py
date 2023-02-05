def solution(n, k):
    answer = 0
    discount = 0
    a=0
    b=0
    for i in range(1,n+1):
        a += 1
        if i%10==0:
            discount += 1
    for j in range(1,k+1):
        b +=1
    answer = a*12000 + b*2000 - discount*2000

    return answer