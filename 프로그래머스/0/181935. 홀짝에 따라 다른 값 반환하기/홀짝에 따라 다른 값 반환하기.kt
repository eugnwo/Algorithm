class Solution {
    fun solution(n: Int): Int {
        var answer: Int = 0
        
        if (n % 2 == 0) {
            for (i in 1 until n + 1) {
                if (i % 2 == 0) {
                    answer += i * i
                }
            }
        } else {
            for (i in 1 until n + 1) {
                if (i % 2 != 0) {
                    answer += i
                }
            }
        }
        
        return answer
    }
}