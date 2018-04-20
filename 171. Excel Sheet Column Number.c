//A~Z: 26,  這是一個26進位的系統, 所以題目是26進位轉10進制

int titleToNumber(char* s) {
    int number=0;
    for(int i=0;s[i]!=0;i++){
        number = number*26 + s[i] - 'A' +1;
    }
    return number;
}