//week04-3.cpp
//1 2 3
//   4�̥k��}�l,+1����
//4 3 2 1
//      2�̥k��}�l,+1����
//9 4 9
//    0���i����줣�i�Hreturn�~��
//  5�̥k��+1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); //�}�C���j�p
        for(int i=N-1;i>=0;i--){
            if(digits[i]==9){
                digits[i] = 0;
            }else{
                digits[i]++;//²��+1��
                return digits;//��������}�C����return
            }
        }
        digits.insert(digits.begin(), 1);//�̥���n���J�@
        return digits;//����
    }
};
