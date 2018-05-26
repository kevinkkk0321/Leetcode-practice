class Solution {
public:// 对应表
   void dfs(string &digits,vector<string> &results, string &temp, string map[], int pos){
       
       if(pos==digits.size()) { 
           results.push_back(temp);
           return;
       }
       string num = map[digits[pos] - '0'];
       
        for(int i=0;i<num.size();i++){
            temp[pos] = num[i];
            dfs(digits, results, temp, map ,pos+1);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> results;
        if(digits.size()==0) return results;
        string temp(digits.size(),'\0');
        string map[] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        dfs(digits, results, temp, map, 0);
        return results;
    }
    
};



/*C code solution*/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** letterCombinations(char* digits, int* returnSize) {
    char** array = (int **)malloc(8*sizeof(char *));
    for(int i=0;i<8;i++){
        *(array+i) = malloc(3*sizeof(char *));
    }
    
    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            array[i][j] = 
        }
    }
    
}