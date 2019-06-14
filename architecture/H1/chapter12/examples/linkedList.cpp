#include <iostream>
using namespace std;

struct NODE {
   int data;
   NODE *link;
};

//==============================================================
// traverse displays the data in a linked list in node order
void traverse(NODE *p)
{
   while(p) {
      cout << p->data << endl;
      p = p->link;    // move p to next node 
   }
}

//==============================================================
// get_data prompts for and inputs an integer
void get_data(int &x)
{
    cout << "enter positive int (or negative int to end\n";
    cin >> x; 
}

//==============================================================
int main()
{
   NODE *head, *p;
   int x;
   head = NULL;
   get_data(x);
   while(x >= 0) {	// end loop on negative number
      p = new NODE;	// allocate new node
      p->data = x;
      p->link = head;	// new node pts to head node
      head = p;		// head ptr pts to new node
      get_data(x);
   }

   cout<< "Traversing list\n";
   traverse(head);

   return 0;
}





















