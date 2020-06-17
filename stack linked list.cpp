#include <stdio.h>
#include <stdlib.h>

#define PUSH 1
#define POP 2
#define LIST 3
#define EXIT 4

struct node
{
 int data;
 struct node *next;
};

struct node *top = NULL;

/*
 * Functions Declarations
 */

/*
 * Function : push
 */
static void push(int num){

 struct node *temp;

 temp = (struct node *)malloc(sizeof(struct node));
 temp->data = num;
 temp->next = top;
 top = temp;

}

/*
 * Function : pop
 */
static void pop(){
	struct node * tmpnode; 
    tmpnode = top; 
    
 if(tmpnode!=NULL)
 {
  printf("pop : %d\n", top->data);
  top = top->next;
  free(tmpnode); 
 }
 else
 {
  printf("Stack Bottom.\n");
 }

}

/*
 * Function : display
 * Display all the elements in the stack.
 */
static void display(){

 struct node *ptr = top;

 while(ptr){

  printf("%d\n", ptr->data);
  ptr = ptr->next;

 }

}

int main(void)
{

 while(1)
 {

  int sel;
  printf("[Stack]\t(1)push\t(2)pop\t(3)display >> ");
  if(scanf("%d",&sel)==EOF) break;

  int temp;
  switch(sel)
  {
   case PUSH:
    printf("push >> ");
    scanf("%d",&temp);
    push(temp);
    break;

   case POP:
    pop();
    break;

   case LIST:
    display();
    break;

   default:
    printf("Wrong Selection.\n");

  }

 }


 //end
 printf("Exit Program.\n");

 return 0;
}


//end
