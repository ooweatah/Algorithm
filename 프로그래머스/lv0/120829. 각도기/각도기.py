def solution(angle):
    
    if angle == 180:
        answer = 4
        
    elif 90 < angle < 180:
        answer = 3
        
    elif 90 == angle:
        answer = 2
        
    elif 0 < angle < 90:
        answer = 1
    

    return answer