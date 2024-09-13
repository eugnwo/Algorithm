class Solution {
    fun solution(array: IntArray, commands: Array<IntArray>): IntArray {
        val answer = IntArray(commands.size)

        for (i in commands.indices) {
            val start = commands[i][0] - 1 
            val end = commands[i][1]
            val minList = array.copyOfRange(start, end)

            minList.sort()
            answer[i] = minList[commands[i][2] - 1]
        }

        return answer
    }
}
