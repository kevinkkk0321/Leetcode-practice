bool isHappy(int n) {
    if(n==1) return true;
    int array[1000]={0};
    int count=0;
        
    while(n>0){
        int check=0;
        int number=0;
        
        while(n){
            number+=(n%10)*(n%10);
            n/=10;
        }
        if(number==1) return true;
        
        array[count]=number;
        
        count++;
        for(int i=0;i<count;i++){            
            if(array[i]==number) check++;
            if(check==2) return false;
        }                
        n=number;
    }
    return false;
}


bool isHappy(int n) {
        while(n>6){  
            int next = 0;  
            while(n){
                next+=(n%10)*(n%10); 
                n/=10;
            }  
            n = next;  
        }  
        return n==1;  
}

//unhappy number），所有不快樂數的數位平方和計算，最後都會進入 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4 的循環中
class Solution {
public:
    bool isHappy(int n) {        
        while(n){     
            if(n==4) return false;
            if(n==1) return true;
            int ans=0;
            while(n){
                ans += (n%10)*(n%10);
                n/=10;
            }
            n = ans;            
        }
    }
};