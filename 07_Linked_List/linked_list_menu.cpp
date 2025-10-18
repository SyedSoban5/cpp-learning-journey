#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class Linke
{
private:
    node *head;
public:
    Linke()
    {
        head = NULL;
    }

    void insertAtB(int value);
    void insertAtE(int value); 
    void insertAfterValue(int target , int value);
    void deletByValue(int value);
    void display();
    void searchValue(int value);
    void clearlist();
};

void Linke::insertAtB(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}
void Linke::insertAtE(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void Linke::insertAfterValue(int target , int value)
{
    node *temp = head;

    while (temp != NULL && temp->data != target)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        cout<<"Target "<<target<<" is not found."<<endl;
        return;
    }

    node *newnode = new node();
    newnode->data = value;
    newnode->next = temp->next;
    temp->next = newnode;
}

void Linke::deletByValue(int value)
{
    if(head == NULL)
    {
        cout<<"List is empty: "<<endl;
        return;
    }

    if(head->data == value)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *curr = head;
    node *prev = NULL;
    while (curr != NULL && curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    if(curr == NULL)
    {
        cout<<"Value if not found: "<<endl;
        return;
    }

    prev->next = curr->next;
    delete curr;
}

void Linke::display()
{
    node *temp = head;
    if(temp == NULL)
    {
        cout<<"List is empty: "<<endl;
        return;
    }

    cout<<"Linke list: "<<endl;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;   
}

void Linke::searchValue(int value)
{
    if(head == NULL)
    {
        cout<<"List is empty: "<<endl;
        return;
    }

    node *temp = head;
    int position = 1;
    bool found = false;

    while (temp != NULL)
    {
        if(temp->data == value)
        {
            cout<<"Value "<<value<<" found at position "<<position<<"."<<endl;
            break;
        }
        position++;
        temp = temp->next;
    }

    if(!found)
    {
        cout<<value<<" Not found! In list."<<endl;
    }
    
}

void Linke::clearlist()
{
    node *temp = head;

    while (temp != NULL)
    {
        node *nextnode = temp->next;
        delete temp;
        temp = nextnode; 
    }
    head = NULL;
}

int main()
{
    Linke list1;
    int choice , target , value;
    do
    {
        cout<<"----Linke List Menu----"<<endl;
        cout<<"1.Instert at Beginning"<<endl;
        cout<<"2.Insert at End"<<endl;
        cout<<"3.Insert After Value"<<endl;
        cout<<"4.Delete by Value"<<endl;
        cout<<"5.Display"<<endl;
        cout<<"6.Search Value"<<endl;
        cout<<"7.Clear List"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter your choice";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value insert at beginning: ";
            cin>>value;
            list1.insertAtB(value);
            break;
        case 2:
            cout<<"Enter value insert at end: ";
            cin>>value;
            list1.insertAtE(value);
            break;
        case 3:
            cout<<"Enter target value after which you want to insert: ";
            cin>>target;
            cout<<"Enter new value: ";
            cin>>value;
            list1.insertAfterValue(target,value);
            break;
        case 4:
            cout<<"Enter value you want to delete: ";
            cin>>value;
            list1.deletByValue(value);
            break;
        case 5:
            list1.display();
            break;
        case 6: 
            cout<<"Enter value you want to search: ";
            cin>>value;
            list1.searchValue(value);
            break;
        case 7:
            list1.clearlist();
            cout<<"List is cleared!"<<endl;
            break;
        case 8:
            cout<<"Exiting program..."<<endl;
            break;
        default:
            cout<<"Invalid choice: "<<endl;
            break;
        }
    }while (choice != 8);

    return 0;
}
