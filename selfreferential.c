#include <stdio.h>
#include <stdlib.h>
struct node 
{
  int x;
  struct node *next;
};

int main()
{
    
    struct node *node1,*node2;      
    node1 = (struct node *) malloc( sizeof(struct node) ); 
    node2 = (struct node *) malloc( sizeof(struct node) );
    printf("Enter first node value:\n");  
    scanf("%d",&node1->x);
    node1->next = node2; 
    printf("Enter second node value:\n");  
    scanf("%d",&node2->x);
    node2->next=node1;
    printf("Node1:%d-> %lu\n",node1->x,node1->next);
    printf("Node2:%d-> %lu\n",node2->x,node2->next);
    return 0;
}
