//week04-1.cpp
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;//�@�}�l�N�ܳo��h�~
        while(numBottles >= numExchange){
            numBottles = numBottles - numExchange+1;//�I���@�~����
            ans ++;//�h�ܤ@�~
            numExchange ++; //�I�����зǦh�@�~
        }
        return ans;
    }
};
