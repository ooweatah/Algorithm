def solution(my_string):
    answer = []
    nums = '0123456789' # 문자열
    
    for x in my_string:
        if x in nums:
            answer.append(int(x))
            answer.sort() # 오름차순 정렬
    return answer