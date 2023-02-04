def solution(my_string):
    reverse_string = ""
    for i in my_string:
        reverse_string= i + reverse_string
    answer = reverse_string    
    return answer