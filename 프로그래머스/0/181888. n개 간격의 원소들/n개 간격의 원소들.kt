class Solution {
    fun solution(num_list: IntArray, n: Int): IntArray {
        if (num_list.isEmpty()) return intArrayOf()

        val count = (num_list.size + n - 1) / n 
        val answer = IntArray(count)
        var arrCount = 0
        
        for (i in num_list.indices) {
            if (i % n == 0) {
                answer[arrCount++] = num_list[i]
            }
        }
        
        return answer
    }
}
