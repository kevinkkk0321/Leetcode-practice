#define max(a,b) a>b?a:b

/* binary search */
int mySqrt(int x) {
    long high = (x/2)+1;
    long low = 0;
    while(high>=low){
        long medium = (high+low)/2;
        if(x==medium*medium) return (int)medium;
        else if (x<medium*medium)
            high = medium-1; 
        else 
            low = medium+1;
    }
    return (int)high;
}


/*Newton's method*/
/*
int mySqrt(int x) {
    if(!x) return 0;
    int y=x/2;
    while(true){
        y = max(y, 1);
        long long k1 =  1L * y * y;
        long long k2 =  1L * (y+1)*(y+1);
        if(k1<=x && x<k2) return y;
        y = (y + x / y) / 2;
    }
    return y;
}
*/




