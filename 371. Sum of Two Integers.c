int getSum(int a, int b) {
    while(b){
        int add = a&b;
        a=a^b;
        b=add<<1;   
    }
    return a;       
}

int getSum(int a, int b) {
        while(b){
        //int temp1 = a^b;
        int temp2 = a&b;
        a = a^b;
        b = temp2<<1;   
    }
    return a;  
}

int getSum(int a, int b) {
        int result = a ^ b; // 按位加
        int carray = (a & b) << 1; // 计算进位
        if(carray!=0) return  getSum(result,carray); //判断进位与处理
        return result;
    }