//
//  main.c
//  file
//

//
#include <stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>



 struct ListNode {
    int val;
    struct ListNode *next;
 };

void duyet(struct ListNode *head)
{
    while(head!=NULL)
    {
        printf("%d ",head->val);
        head=head->next;
    }
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *head=NULL;
    struct ListNode *temp=head,*prev;

    
    if(list1==NULL) return list2;
    if(list2==NULL) return list1;
    while(list1&&list2)
    {
        prev=temp;
        if(list1->val<list2->val)
        {
            temp=list1;
            list1=list1->next;
        }
        else{
            temp=list2;
            list2=list2->next;
        }
        temp->next=NULL;
        if(prev!=NULL)
        {

            prev->next=temp;


        }
        else
        {

            head=temp;

        }

        
        
        
    }
    if(list1) temp->next=list1;
    else temp->next=list2;
    
    return head;

}
struct ListNode *makeNode(int val)
{
    struct ListNode*newNode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val=val;
    newNode->next=NULL;
    return newNode;
}
void pushBack(struct ListNode**head,int x)
{
    struct ListNode*newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    struct ListNode *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
//void duyet(struct ListNode *head)
//{
//    while
//}
int main()
{
    struct ListNode*head1=NULL;
    struct ListNode*head2=NULL;
    pushBack(&head1, 1);
    pushBack(&head1, 2);
    pushBack(&head1, 4);
    pushBack(&head2, 1);
    pushBack(&head2, 3);
    pushBack(&head2, 4);
    struct ListNode *head3=mergeTwoLists(head1, head2);
    
}
