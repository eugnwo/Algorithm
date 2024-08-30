class Solution {
    fun solution(num_list: IntArray): Int {
        var answer: Int = 0
        var mul: Int = 1
        var sum: Int = 0
        
        val size = num_list.size
        
        for (i in 0 until size) {
            mul *= num_list[i]
            sum += num_list[i]
        }
        
        if (mul < (sum * sum)) {
            answer = 1
        }
        
        return answer
    }
}