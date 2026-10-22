/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void add(struct ListNode **root,int val){
    struct ListNode *newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    newnode->val=val;
    newnode->next=NULL;
    if(*root==NULL){
        newnode->next=*root;
        *root=newnode;
        return;
    }
    struct ListNode *temp=*root;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3=NULL;
    int car=0;
    while(l1!=NULL||l2!=NULL||car){
        int s=0;
        if(l1!=NULL){
            s+=l1->val;
            l1=l1->next;
        }
        if(l2!=NULL){
            s+=l2->val;
            l2=l2->next;
        }
        s+=car;
        car=s/10;
        add(&l3,s%10);
    }
    return l3;
}