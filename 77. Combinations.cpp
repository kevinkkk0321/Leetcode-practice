class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> sol;
        if(n==0||k==0) return sol;
        vector<int> temp;
        DFS(sol, temp, n, k, 1);
        return sol;
    }

    void DFS(vector<vector<int>>& sol, vector<int>& temp, int n, int k, int level){
        /*if(temp.size() == k){
            sol.push_back(temp);
            return;
        }*/
        if(k==0){
            sol.push_back(temp);
            return;
        }

        for(int i=level;i<=n-k+1;i++){
            temp.push_back(i);
            DFS(sol, temp, n, k-1, i+1);
            temp.pop_back();
        }
    }
};
