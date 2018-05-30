char* reverseString(char* s) {
    int i=0;
    int j = strlen(s)-1;        
    while(j>i){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
        i++;
        j--;
    }
    return s;    
}