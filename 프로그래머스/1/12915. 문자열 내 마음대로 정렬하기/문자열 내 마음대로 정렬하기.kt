class Solution {
    fun solution(strings: Array<String>, n: Int): Array<String> {
        var answer = strings
        
        var arr = answer.sortedWith(compareBy({ it[n] }, { it }))
        
        /// list 타입으로 반환되는 arr 변수를 Array 타입으로 변환
        return arr.toTypedArray()
    }
}