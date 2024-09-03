class Solution {
    fun solution(my_string: String, n: Int): String {
        var answer: String = ""
        var len: Int = my_string.length
        
        for (i in len - n until len) {
            answer += my_string[i]
        }
        
        return answer
    }
}