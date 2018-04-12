int reverse(int x) {
    int check=1;
    if(x==NULL) return 0;
    else if(x<0) {
        x=x*(-1);
        check=-1;
    }
    int answer=0;
    
    while(x!=0){        
        int temp = x%10;
        x = x/10;
        int temp_answer=answer*10+temp;
        if (((temp_answer-temp)/10) != answer) return 0;  // check if answer overleaked
        answer = temp_answer;
    }
    
    
    return answer*check;
    
    
}