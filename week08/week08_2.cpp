//week08_2.cpp學習計畫
//73. Set Matrix Zeroes設定一堆0
//要小心,不能一邊讀一邊設成0,要兩階短先讀完再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一階段先讀完記下全部的零對應的i和j
        int M = matrix.size(), N = matrix[0].size(); //左手M,右手N
        vector<int> markI(M, 0), markJ(N, 0);//宣告C++的陣列,長度分別M,N裡面都設成0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){  //要記下對應的i,j
                    markI[i]=1;//標記一下i的這整個橫條等一下都要清為0
                    markJ[j]=1;//標記一下j的這整個橫條等一下都要清為0
                }
            }
        }
        //第二階段再照著markI 和 markJ的標記,把整條歐清為0
        for(int i=0; i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }
        }
    }
};
