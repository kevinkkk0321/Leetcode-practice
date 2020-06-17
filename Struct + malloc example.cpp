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


int cmpW( const void* p1 , const void*p2){  //�ΨӤ���魫  (�Ƕi�h�Ovoid���A�A�����D�O����F��A�ҥH�૬)
	const Student* ps1 = (const Student*)p1;  //�૬: ��쥻void�����ܦ�student���� const�ݩ�  
	const Student* ps2 = (const Student*)p2;  //const:�u��Ū����g�J  *ps1���Vp1(��ps1 �s���G) 
	return (int)(ps1 ->w - ps2->w);
}

int cmpH( const void* p1, const void *p2){  //�ΨӤ������ 
	const Student* ps1 = (const Student*)p1;  
	const Student* ps2 = (const Student*)p2;
	return (int)(ps1 ->h - ps2->h);
}

int main(){
	size_t n = 0;
	printf("n="); scanf("%d",&n); getchar();
	Student *A = (Student *)malloc(sizeof(Student)*n);  //���t���X�ӰO����A�`�N:�ǥX�ӷ|�O�Ӧ�m, �Ϋ��Цs�o�Ӧ�m 
	                                                    // malloc�ǥX�ӬOvoid ,�ҥH�� Student ����A�Ӧs�o�Ӧ�} 
	int i=0;
	for(i=0; i<n; i++)
		InputStudent(A+i); //���V��i�Ӿǥͪ��O�����m (����+��ƬO�[�Wi�ӳ�쪺�Z��) �o����Z���O���@�Ӿǥͪ��j�p 
		
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
