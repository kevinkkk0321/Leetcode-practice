class Solution {
public:
    int myAtoi(string str) {
        
        int pos = 0;
        long res = 0;
        int sign = 1;
        
        while(str[pos]==' ') pos++;
        
        if(str[pos]=='-' || str[pos]=='+'){
            if (str[pos++]=='-')
                sign *= -1;
        }
        
        while(pos < str.length() && isdigit(str[pos])){            
            res = res*10 + str[pos]-'0';
            pos++;
            if (res*sign>INT_MAX) return INT_MAX;
            if (res*sign<INT_MIN) return INT_MIN;
        }
        return res*sign;
    }
};
