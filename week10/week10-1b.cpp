//week10-1b.cpp寫兩次第一次用for迴圈第二次用數學
//1523. Count Odd Numbers in an Interval Range
//從low....high裡面有幾個od奇數?
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2;//用數學奇數佔一半
        if(high%2==1 || low%2==1) ans++;//頭尾有奇數要++
        return ans;
    }
};
