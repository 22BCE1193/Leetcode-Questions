class Solution {
public:
    int minimumTotal(vector<vector<int>>& A) {
        for (int N = A.size(), i = N - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                A[i][j] += min(A[i + 1][j], A[i + 1][j + 1]);
            }
        }
        return A[0][0];
    }
};