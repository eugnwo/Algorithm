class Solution {
    fun solution(start_num: Int, end_num: Int): IntArray {
        var answer: IntArray = IntArray((end_num - start_num) + 1)
        var count: Int = 0
        
        for (i in start_num..end_num) {
            answer[count++] = i
        }
        
        return answer
    }
}