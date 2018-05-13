int table[500];

void dp(){
    table[1]=1;
    table[2]=2;
    //table[2]=2;
    for(int i=3;i<500;i++){
        table[i] = table[i-1]+ table[i-2];
    }
}

int record(int n){
    if(n==1 ) return 1;
    else if(n==2 ) return 2;
    
    if(table[n]) return table[n];
    
    return table[n] = climbStairs(n-1)+climbStairs(n-2);
}

int climbStairs(int n) {
    /*method 1*/
    dp();
    return table[n];
    
    /*method 2*/
    //return record(n);
}