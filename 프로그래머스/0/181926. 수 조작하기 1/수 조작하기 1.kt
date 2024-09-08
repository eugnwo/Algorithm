class Solution {
    fun solution(n: Int, control: String): Int {
        var answer: Int = n
        
        for (i in control.indices) {
            when (control[i]) {
                'w' -> answer += 1
                's' -> answer -= 1
                'd' -> answer += 10
                'a' -> answer -= 10
            }
        }
        
        return answer
    }
}
