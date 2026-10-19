/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void resadd(struct ListNode **r,int data){
    struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=data;
    newnode->next=NULL;
    if(*r==NULL){
        newnode->next=*r;
        *r=newnode;
        return;
    }
    struct ListNode *temp=*r;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *res=NULL;
    while(list1!=NULL&&list2!=NULL){
        if(list1->val<=list2->val){
            resadd(&res,list1->val);
            list1=list1->next;
        }
        else{
            resadd(&res,list2->val);
            list2=list2->next;
        }
    }
    while(list1!=NULL){
        resadd(&res,list1->val);
        list1=list1->next;
    }
    while(list2!=NULL){
        resadd(&res,list2->val);
        list2=list2->next;
    }
    return res;
}