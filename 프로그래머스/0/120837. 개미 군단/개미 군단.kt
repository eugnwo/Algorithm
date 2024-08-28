class Solution {
    fun solution(hp: Int): Int = hp / 5 + (hp % 5 / 3) + (hp % 5 % 3)
}