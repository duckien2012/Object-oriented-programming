#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
public:
    Node() // Constructor
    {
        this->next=NULL;
    }
    Node(int data, Node* next = NULL) // function overloading: many functions same name, different parameters
    {
        this->data = data; // this: pointer to an object (this points to class Node)
        this->next = next;
    }
};
class SLL {
private:
    Node *head;
    Node *tail;
    int cnt;
public:
    SLL()
    {
        head = tail = NULL;
        cnt = 0;
    }
    void addTail(int data)
    {
        if ( head == NULL)
        {
            Node* newNode = new Node(data);
            head = tail = newNode;
            cnt++;
        }
        else{
            Node* newNode = new Node(data);

            tail = tail->next = newNode;
            //tail = tail->next;
            cnt++;
        }
    }
    void print()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

/*class Rectangle
{
private:
    double length;
    double width;
public:
// Constructor
// syntax:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;  
    }
    void setValue(double l, double w)
    {
        length = l;
        width = w;
    }
    double recArea() {return length * width;}
};*/
int main()
{
    SLL list;
    list.print(); // ko in gi het
    list.addTail(5);
    list.print();
    list.addTail(7);
    list.print();
    return 0;
}