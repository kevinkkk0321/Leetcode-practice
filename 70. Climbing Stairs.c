int table[500];


void method_one(){
    table[1]=1;
    table[2]=2;
    for(int i=3;i<500;i++){
        table[i] = table[i-1]+ table[i-2];
    }
}

int method_two(int n){
    if(n==1 ) return 1;
    else if(n==2 ) return 2;    
    if(table[n]) return table[n];    
    return table[n] = climbStairs(n-1)+climbStairs(n-2);
}

int method_three(int n){
    int array[2]={1,1};
    for(int i=1;i<n;i++){
        int temp=array[1];
        array[1]+=array[0];
        array[0]=temp;
    }
    return array[1];  
}



int climbStairs(int n) {
    /*method 1*/
    //method_one();
    //return table[n];
    
    /*method 2*/
    //return method_two(n);
    
    /*method 3*/
    return method_three(n);
}