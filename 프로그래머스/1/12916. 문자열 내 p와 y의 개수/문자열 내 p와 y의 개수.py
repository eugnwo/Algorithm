def solution(s):
    answer = True
    
    p_count = 0
    y_count = 0
    
    p_count += s.count('p')
    p_count += s.count('P')
    
    y_count += s.count('y')
    y_count += s.count('Y')
    
    if p_count != y_count :
        answer = False

    return answer