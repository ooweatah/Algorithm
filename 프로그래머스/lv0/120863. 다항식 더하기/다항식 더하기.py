def solution(polynomial):
    answer = ''
    n = 0
    num  = 0
    poly = polynomial.split(' + ') 
    for p in poly:
        if p.isnumeric():
            # 상수항
            num += int(p)
        else:
            # 계수
            if 'x' in p:
                # x인경우
                if len(p) == 1:
                    n += 1
                # nx인 경우
                else: 
                    n += int(p[:-1])
    # 계수가 0이 아닌경우
    if num != 0:
        if n == 1:
            answer = 'x + '+str(num)
        elif n > 1:
            answer = str(n)+'x + '+str(num)
        else:
            answer = str(num)
    else:
        if n == 1:
            answer = 'x'
        else:
            answer = str(n)+'x'
    return answer