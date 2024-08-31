class Solution {
    fun solution(num_list: IntArray): Int {
        var answer: Int = -1
        for (i in 0 until num_list.size) {
            if (num_list[i] < 0) {
                answer = i
                break
            }
        }
        return answer
    }
}