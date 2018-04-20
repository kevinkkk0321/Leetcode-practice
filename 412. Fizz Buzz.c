/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
Mine submission: 
char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char **array = (char **)malloc(n*sizeof(char*));
    
    char test;
    int i;
    for(i=0;i<n;i++){
        if( ((i+1)%3==0) && ((i+1)%5==0) ){
            array[i] = (char *)malloc(sizeof("FizzBuzz"));
            strcpy(array[i],"FizzBuzz");
        }            
        else if(((i+1)%3==0)){
            array[i] = (char *)malloc(sizeof("Fizz"));
            strcpy(array[i],"Fizz");
        }
        else if(((i+1)%5==0)){
            array[i] = (char *)malloc(sizeof("Buzz"));
            strcpy(array[i],"Buzz");
        }
        else {
            char buffer[10];
            array[i] = (char *)malloc(sizeof(buffer));            
            sprintf(buffer,"%d",i+1);  
            strcpy(array[i],buffer);
        }
    }
    
    return array;
    
}


Online answer(beat 100%):
/** 
 * Return an array of size *returnSize. 
 * Note: The returned array must be malloced, assume caller calls free(). 
 */  
char** fizzBuzz(int n, int* returnSize) {  
    *returnSize=n;//returnSize指向的值代表需要返回的数组的个数，虽然是在函数里面修改他的值，但是函数外面也是有变动的  
    char buf[10];//定义一个字符数组用于存放‘Fizz’这种，buf[0]=‘F’，buf[1]='i'等，一个char字符是一个字节只能放一个字母  
    char **re_p=(char **)malloc(n*sizeof(char *));//申请一个字符串数组，n行，每行一个char类型的指针  
    int i=0;  
    for(i=0;i<n;i++){  
        if(((i+1)%3==0)&&((i+1)%5==0)){  
            sprintf(buf,"%s","FizzBuzz");//虽然申请了char*但这只是指向字符串第一个元素的位置，需要把字符串赋值给buf，再让char*指向buf  
        }else if((i+1)%3==0){  
            sprintf(buf,"%s","Fizz");//字符串用双引号，字符用单引号  
        }else if((i+1)%5==0){  
            sprintf(buf,"%s","Buzz");  
        }else{  
            sprintf(buf,"%d",i+1);  
        }  
        re_p[i]=malloc(sizeof(buf));  
        memcpy(re_p[i],buf,strlen(buf)+1);//strlen是指buf里字符串的长度，不是11，比如"Fizz",strlen(buf)=4,+1是为了把'\0'也放进来，不放进来就会出现乱码吧 我觉得  
        memset(buf," ",11);//为buf清零初始化，将buf中当前位置后面的11个字节，用“ ”代替，并返回buf  
    }  
    return re_p;     
}  

  
