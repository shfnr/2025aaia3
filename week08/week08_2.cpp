//week08_2.cpp�ǲ߭p�e
//73. Set Matrix Zeroes�]�w�@��0
//�n�p��,����@��Ū�@��]��0,�n�ⶥ�u��Ū���A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //�Ĥ@���q��Ū���O�U�������s������i�Mj
        int M = matrix.size(), N = matrix[0].size(); //����M,�k��N
        vector<int> markI(M, 0), markJ(N, 0);//�ŧiC++���}�C,���פ��OM,N�̭����]��0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){  //�n�O�U������i,j
                    markI[i]=1;//�аO�@�Ui���o��Ӿ�����@�U���n�M��0
                    markJ[j]=1;//�аO�@�Uj���o��Ӿ�����@�U���n�M��0
                }
            }
        }
        //�ĤG���q�A�ӵ�markI �M markJ���аO,�����ڲM��0
        for(int i=0; i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }
        }
    }
};
