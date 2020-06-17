#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
Node *next;
};

void ShowNode(const Node* p){
printf("%d\n", p->data);
}

Node* NewNode(int data = 0, Node *pNext = NULL){
Node x = {data, pNext};
Node *p = (Node *)malloc(sizeof(Node));
*p = x;
return p;
}



Node* Insert(Node* pA, Node* pB,Node* pNew){
	if (pA != NULL)
	pA -> next = pNew ;
	pNew -> next = pB ;
	
	return pNew;
}

Node* Remove( Node*pA, Node* pB){
	Node *ptmp = NULL;
	if (pB){
		ptmp = pB -> next;
		free(pB);			
		}
		if(pA) pA ->next = ptmp;
		return ptmp;
}

Node * Search(Node* pHead, int key){
	
  Node *p = pHead;
  while(p != NULL) 
  {
    if(p->data == key) return p;
	p = p->next;
	}
	return NULL;
} 

Node* SearchRemove( Node *pHead, int key){
	
   Node *p = pHead , *pA= NULL;
   while(p != NULL) {
   	    if(p->data == key) {
		    	Node *ptmp = p->next;
		    	if(pA) pA ->next = ptmp;
				free(p) ;
				return ptmp;
		}
		pA = p;
		p = p->next;
		}
		return NULL;
} 





int main(){

// Creation!
Node *pHead = NULL;
for( int i=4; i>=0; --i)
pHead = NewNode(i, pHead); 

// Output !
Node *p = pHead;
while(p != NULL) {
ShowNode(p);
p = p->next;
}


Node *pA = pHead -> next -> next;
pA = Insert(pA, pA->next, NewNode(99, NULL)); 

Remove(pA, pA -> next);


// ¦A¦¸ Output !
p = pHead;
while(p != NULL) {
ShowNode(p);
p = p->next;
}


SearchRemove(pHead, 1);

p = pHead;
while(p != NULL) {
ShowNode(p);
p = p->next;
}



if (Search(pHead, 0)) printf("found\n");
else printf("not found\n");

// deletion all!
p = pHead;
while(p != NULL) {
Node *pTmp = p;
p = p->next;
free(pTmp); // Release each item!
}

system ("pause");

}
