#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};
void insertion(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
void dln(node* &head) {
     if (head == nullptr || head->next == nullptr) {
        // If the list is empty or has only one node, there's nothing to delete.
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;

}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    int k,d;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        insertion(head,k);
    }

    dln(head);
    display(head);

    return 0;
}
