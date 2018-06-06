bool isAnagram(char* s, char* t) {
    int a[26]={0},b[26]={0};  
    int i;  
    if(strlen(s)!=strlen(t))  
        return false;  
    i=0;  
    while(s[i]!='\0')  
    {  
        a[s[i]-'a']++;  
        b[t[i]-'a']++;  
        i++;  
    }  
    for(i=0;i<26;i++)  
    {  
        if(a[i]!=b[i])  return false;  
    }      
    return true;  
}


/*C++ -- method 2*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());  
        sort(t.begin(),t.end());//sort是c++中的一个排序函数。sort（s.begin(),s.end()）表示对给定区间所有元素进行排序。  
        return s==t;  
    }
};