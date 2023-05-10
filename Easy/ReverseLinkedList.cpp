 ListNode* reverseList(ListNode* head) {

        if(head==NULL)
            return head;

        if(head->next==NULL)
            return head;

        ListNode* Rhead;

        vector<ListNode*> Nodes;

        while(head!=NULL)
        {
            Nodes.push_back(head);
            head=head->next;
        }

        int n=Nodes.size();
        ListNode* t=new ListNode(Nodes[n-1]->val);
        Rhead=t;
        ListNode* temp=Rhead;

        for(int i=n-2; i>=0; i--)
        {
            ListNode* t=new ListNode(Nodes[i]->val);
            Rhead->next=t;
            Rhead=Rhead->next;
        }

        return Rhead=temp;
    }