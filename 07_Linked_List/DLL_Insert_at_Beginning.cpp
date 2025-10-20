#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        node *prev;
};

class DLL
{
    private:
        node *head;
    public:
        DLL()
        {
            head = NULL;
        }
    void insert_at_b(int value);
    void forwarddisplay();
};

void DLL::insert_at_b(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = head;
    newnode->prev = NULL;

    if(head != NULL)
    {
        head->prev = newnode;
    }
    head = newnode;
}
void DLL::forwarddisplay()
{
    if(head == NULL)
    {
        cout<<"List is empty!"<<endl;
        return;
    }
     node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    DLL list;

    list.insert_at_b(10);
    list.insert_at_b(20);
    list.insert_at_b(25);

    list.forwarddisplay();

    return 0;
}
