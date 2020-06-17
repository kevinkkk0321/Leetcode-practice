#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Student{
	char name[8];
	float w,h;
}; 

void InputStudent(Student* px){
	scanf("%s %f %f", px ->name, &px ->w, &px->h);
}
void PrintfStudent( const struct Student* px){
	printf("name:%s, weight:%f, height:%f\n", px->name, px->w, px->h );
}


int cmpW( const void* p1 , const void*p2){  //用來比較體重  (傳進去是void型態，不知道是什麼東西，所以轉型)
	const Student* ps1 = (const Student*)p1;  //轉型: 把原本void指標變成student指標 const屬性  
	const Student* ps2 = (const Student*)p2;  //const:只能讀不能寫入  *ps1指向p1(用ps1 存結果) 
	return (int)(ps1 ->w - ps2->w);
}

int cmpH( const void* p1, const void *p2){  //用來比較身高 
	const Student* ps1 = (const Student*)p1;  
	const Student* ps2 = (const Student*)p2;
	return (int)(ps1 ->h - ps2->h);
}

int main(){
	size_t n = 0;
	printf("n="); scanf("%d",&n); getchar();
	Student *A = (Student *)malloc(sizeof(Student)*n);  //分配有幾個記憶體，注意:傳出來會是個位置, 用指標存這個位置 
	                                                    // malloc傳出來是void ,所以用 Student 指標A來存這個位址 
	int i=0;
	for(i=0; i<n; i++)
		InputStudent(A+i); //指向第i個學生的記憶體位置 (指標+整數是加上i個單位的距離) 這邊單位距離是指一個學生的大小 
		
		printf("Sorted by weight:\n");
		qsort(A, n, sizeof(Student), cmpW);
		for(i=0; i<n; ++i)
			PrintfStudent(A+i);
			
		printf("Sorted by height:\n");	 
		qsort(A, n, sizeof(Student), cmpH);
		for(i=0; i<n; ++i)
			PrintfStudent(A+i);
			
		system("pause");	
		
	
}
