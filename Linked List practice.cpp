#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node *next;
};

void showNode(Node *p)
{
	printf("%d ",p->data);
}

Node* NewNode(int data=0, Node *pNext = NULL)
{
	Node *p = (Node *)malloc(sizeof(Node));
	p->data=data;
	p->next=pNext;
	return p;
}

Node *insert(Node *pA, Node *pB, Node *pNew) /* insert pNew */
{
	if(pA != NULL)
	pA -> next = pNew;
	pNew ->next = pB;
	return pNew;
}

Node *Remove(Node *pA, Node *pB) /* remove pB */ 
{
	Node *pTmp = NULL;
	if(pB)
	{
		pTmp = pB -> next;
		free(pB);
	}
	if(pA) pA -> next = pTmp;
	return pTmp;
}

Node *Search(Node* pHead, int key)
{
	Node *ptemp = pHead;
	while(ptemp != NULL){
		if(ptemp->data == key) return ptemp;
		ptemp = ptemp -> next;
		}
	return NULL;
}

Node *remove_node(Node* pHead, int key)  /*remove�@�ӼƦr*/
{
	Node *p = pHead, *pA = NULL;
	while(p != NULL)
	{
		if (p->data == key){
			Node *ptemp = p->next;
			if(pA) pA->next = ptemp;
			free(p);
			return ptemp;
		}
	pA = p;
	p = p->next;
	}
	return NULL;
} 


int main(void)
{
	/*creation*/
	Node *pHead = NULL;
	for(int i=4;i>=0;--i)
	 	pHead = NewNode(i, pHead);
	 	
	 /*insert*/	
	 Node *pA = pHead -> next -> next;  	
	 insert(pA, pA-> next, NewNode(99,pHead)); /*�bpA���V2 , pA->next���V3 �A�b�������J99*/ 
	 
	 /*remove*/
	 Remove(pA, pA->next);  /*pA�{�b�O2*/ /*remove2���᭱'99'*/
	 
	 
	/*REMOVE �Y�ӼƦr ex:3*/ 
	remove_node(pHead,3);
	 
	/*output*/
	Node *p = pHead;
	while(p != NULL)
	{
		showNode(p);
		p = p->next;
	}
	
	 /*search*/
	 if(Search(pHead, 3)) printf("Found\n");
	 else printf("not Found");
	
	
	/*detection all*/
	p = pHead;
	
} 


