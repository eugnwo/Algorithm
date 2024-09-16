class Solution {
    fun solution(arr: IntArray, n: Int): IntArray {
        var answer = IntArray(arr.size)
        
        if (arr.size % 2 == 0) {
            for (i in 0 until arr.size) {
                if (i % 2 != 0) {
                    answer[i] = arr[i] + n
                } else {
                    answer[i] = arr[i]
                }
            }        
        } else {
            for (i in 0 until arr.size) {
                if (i % 2 == 0) {
                    answer[i] = arr[i] + n
                } else {
                    answer[i] = arr[i]
                }
            }   
        }
        
        return answer
    }
}