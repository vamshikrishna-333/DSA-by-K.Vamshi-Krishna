
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        for(int i = 0; i < n; i++) {
            vector<int> temp;
            int x = i, y = 0;

            while(x < n && y < m) {
                temp.push_back(mat[x][y]);
                x++;
                y++;
            }

            sort(temp.begin(), temp.end());

            x = i, y = 0;

            for(int k = 0; k < temp.size(); k++) {
                mat[x][y] = temp[k];
                x++;
                y++;
            }
        }

        for(int j = 1; j < m; j++) {
            vector<int> temp;
            int x = 0, y = j;

            while(x < n && y < m) {
                temp.push_back(mat[x][y]);
                x++;
                y++;
            }

            sort(temp.begin(), temp.end());

            x = 0, y = j;

            for(int k = 0; k < temp.size(); k++) {
                mat[x][y] = temp[k];
                x++;
                y++;
            }
        }

        return mat;
    }
};
