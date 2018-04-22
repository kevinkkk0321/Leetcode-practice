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