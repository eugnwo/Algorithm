class Solution {
    fun solution(arr1: IntArray, arr2: IntArray): Int {
        var answer: Int = 0
        
        var size1: Int = arr1.size;
        var size2: Int = arr2.size;
        
        var sum1: Int = 0
        var sum2: Int = 0
        
        if (size1 < size2) {
            answer = -1
        } else if (size1 > size2) {
            answer = 1
        } else{
            for (i in 0 until size1) {
                sum1 += arr1[i]
                sum2 += arr2[i]
            }
            if (sum1 > sum2) {
                answer = 1
            } else if (sum1 < sum2) {
                answer = -1
            } else {
                answer = 0
            }
        }
        
        return answer
    }
}