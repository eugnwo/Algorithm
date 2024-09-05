class Solution {
    fun solution(n: Int, k: Int): IntArray {
        
        val count = n / k
        val answer = IntArray(count)
        var cnt = 0
        
        for (i in k..n) {
            if (i % k == 0) {
                answer[cnt++] = i
            }
        }
        
        return answer
    }
}
