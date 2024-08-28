class Solution {
    fun solution(arr: IntArray, idx: Int): Int {
        var answer: Int = -1
        
        for (i in (idx) until arr.size) {
            if (arr[i] == 1) { 
                answer = i 
                break
            }
        }
        
        return answer
    }
}