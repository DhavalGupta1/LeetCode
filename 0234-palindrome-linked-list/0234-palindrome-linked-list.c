/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int len(struct ListNode **head){
    struct ListNode *temp=*head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    return c;
 }
bool isPalindrome(struct ListNode* head) {
    struct ListNode *cur=head;
    struct ListNode *pre=NULL;
    while(cur!=NULL){
        struct ListNode *node=(struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = cur->val;
        node->next = pre;
        pre = node;
        cur = cur->next;
    }
    struct ListNode *temp=head;
    while(temp!=NULL){
        if(temp->val!=pre->val){
            return 0;
        }
        pre=pre->next;
        temp=temp->next;
    }
    return 1;
    // int l=len(&head);
    // int mid=l/2;
    // if(l<=1){
    //     return head;
    // }
    // struct ListNode *temp=head;
    // for(int i=0;i<l;i++){
    //     struct ListNode *temp2=head;
    //     for(int j=0;j<l-i-1&&temp2!=NULL;j++){
    //         temp2=temp2->next;
    //     }
    //     if(temp->val!=temp2->val){
    //         return 0;
    //     }
    //     temp=temp->next;
    // }
    // return 1;
}