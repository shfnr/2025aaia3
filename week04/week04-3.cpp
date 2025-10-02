//week04-3.cpp
//1 2 3
//   4最右邊開始,+1完成
//4 3 2 1
//      2最右邊開始,+1完成
//9 4 9
//    0有進位怎麼辦不可以return繼續做
//  5最右邊+1完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); //陣列的大小
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9){
                digits[i] = 0;
            }else{
                digits[i]++;//簡單+1拉
                return digits;//把全部的陣列當答案return
            }
        }
        digits.insert(digits.begin(), 1);//最左邊要插入一
        return digits;//結束
    }
};
