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
    void insert_at_e(int value);
    void insert_after_value(int target , int value);
    void delete_at_e();
    void delete_at_b();
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
void DLL::insert_at_e(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        return;  
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
    
}

void DLL::insert_after_value(int target , int value)
{
    node *newnode = new node();
    newnode->data = value;

    if(head == NULL)
    {
        cout<<"List is empty!"<<endl;
        return;
    }

    node *temp = head;
    while(temp != NULL && temp->data != target)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout<<"Target "<<target<<" not found."<<endl;
        return;
    }

    if(temp->next != NULL)
    {
        temp->next->prev = newnode;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;

}

void DLL::delete_at_e()
{
    if(head == NULL)
    {
        cout<<"List is empty! "<<endl;
        return;
    }

    if (head->next == NULL)  
    {
        delete head;
        head = NULL;
        cout << "Last node deleted (list is now empty)." << endl;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout<<"Deleting last node..."<<endl;

    temp->prev->next = NULL;
    delete temp;
    
}

void DLL::delete_at_b()
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }

    cout<<"Deleting First node.."<<endl;

     if (head->next == NULL) 
    {
        delete head;
        head = NULL;
        cout << "List is now empty." << endl;
        return;
    }

    node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
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

    list.insert_at_e(10);
    list.insert_at_e(20);
    list.insert_at_e(25);

    list.forwarddisplay();

    list.insert_after_value(30 , 15);
    list.insert_after_value(10 , 15);
    list.forwarddisplay();

    list.delete_at_e();
    list.forwarddisplay();

    list.delete_at_b();
    list.forwarddisplay();

    return 0;
}
