 bool isPalindrome(ListNode* head) {

        string st="";

        while(head!=NULL)
        {
            st+=(head->val+'0');
            head=head->next;
        }

        int e=st.size()-1;
        int s=0;

        while(s<=e)
        {
            if(st[s]!=st[e])
                return false;
            s++;
            e--;
        }

        return true;
    }