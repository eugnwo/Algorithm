class Solution {
    fun solution(my_string: String, alp: String): String {
        var answer = ""

        for (i in 0 until my_string.length) {
            if (my_string[i] == alp[0]) {
                answer += my_string[i].uppercaseChar()
            } else {
                answer += my_string[i]
            }
        }

        return answer
    }
}