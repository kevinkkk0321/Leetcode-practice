class Solution {
public:
    int lengthOfLongestSubstring(string s) {        
        int res = 0, max = 0;
        
        if (s.empty()) {
            return 0;
        }
        
        char *p=s.data(); 
        
        unordered_map <char, int> table;
        
        for(int i=0; i<s.size(); i++){
            if(table[p[i]] == NULL){
                table[p[i]] = 1;
                res++;
                if(res>max)
                    max = res;
            }
            else{
                if(res>max)
                    max = res;
                table.clear();
                table[p[i]] = 1;
                res = 1;
            }
        }
        return max;
    }
    
};