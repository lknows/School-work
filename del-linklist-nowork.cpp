/**************************************************
*
*      program name:       linked-list
*      Author:             Grant Fisher
*      date due:           2/
*      remarks:            I don't know.
*
*
***************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>

/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;
/****************************************
*         Class definitions
****************************************/
class Node
{
      private:
               int* number;              // value of the node
               Node* prev;               // points to previous node
               Node* next;               // points to next node
      public:
             // constructor
             Node();
             Node(int n);

             // deconstructor
             ~Node();

             // setters
             void setPrev(Node* pp)      {prev = pp;}
             void setNext(Node* np)      {next = np;}
             void setNumber(int n)       {*number = n;}

             // getters
              Node* getPrev()            {return prev;}
              Node* getNext()            {return next;}
              int getNumber()            {return *number;}

              void display();
};
/****************************************
*         member functions
****************************************/
// constructor
Node :: Node()
{
     number = new int(0);
     prev = NULL;
     next = NULL;
}

Node :: Node(int n)
{
     number = new int(n);
     prev = NULL;
     next = NULL;
}

Node :: ~Node()
{
     cout << "\n in deconstructor \n";
     delete number;
}

void Node :: display()
{
     cout << "\n";
     cout << "node number         " << getNumber() << "\n";
     cout << "previous node       " << getPrev() << "\n";
     cout << "next node           " << getNext() << "\n";
     cout << "current node        " << this     << "\n";
     cout << "\n";
}
/****************************************
*          function prototypes
****************************************/
void loadLinkedList(Node** pps);
void traverse(Node** start);
void delNode(Node** start, int delNum);

/*****************************************
*   main() - the function that executes
*****************************************/
int main()
{
    /*******************************
    *     local variables
    ******************************/
    Node* start;                   // start of linked list
    //Node* temp;

    Node** ppStart;                // pointer to a Node pointer
    ppStart = &start;              // put address of start in ppStart

    cout << "\n\n start Linked list \n\n";
    loadLinkedList(ppStart);
    delNode(&start, 3);
    delNode(&start, 5);
    delNode(&start, 1);
    // this works as well: traverse(&start);
    traverse(&start);

    cout << "DonewithTraverse();";


    system("PAUSE");               // causes the program to pause
	return 0;
}  // end main

void traverse(Node** start)
{
     Node* current;
     current = *start;

     current->display();

     while (current->getNext()!=NULL)
      {
      current=current->getNext();
      current->display();
      }

}

void delNode(Node** start, int delNum)
{
     Node* current;
     current = *start;
     while(delNum != current->getNumber() && current->getNext()!=NULL)
     {
                  current = current->getNext();
     }

     //Delete node
     if (current->getNumber() == delNum)
     {
         if (current->getPrev() == NULL && current->getNext() == NULL)
         {

         }

         else if (current->getPrev() == NULL)
         {
             current = current->getNext();
             current->getPrev();
             *start = current->getNext();
         }

         else if (current->getNext() == NULL)
         {
             current->getPrev()->setNext(NULL);
         }

         else
         {
             current -> getNext() -> setPrev(current->getPrev());
             current -> getPrev() -> setNext(current->getNext());
         }
     }
     current->display();
}

void loadLinkedList(Node** pps)
{
    // we are basically just dealing with addresses of objects
    // we will store the address of the current object
    // and the address of the previous and next objects
    /*****************/
    Node* start;
    Node* temp;
    Node* savePtr;
    // create linked list (using new for each node)

    start = new Node(1);          // create the 1st (start) node
    savePtr = start;              // save address of CURRENT node in savePtr
    //savePtr->display();
    //system("pause");

    temp = new Node(3);         // create the next NEW node
    savePtr->setNext(temp);     // set setNext of the PREVIOUS node using address of CURRENT node
    temp->setPrev(savePtr);
          savePtr->display();    // set setPrevious of CURRENT node using saved pointer
    savePtr = temp;             // save address of CURRENT node in savePtr to use with next node
    //savePtr->display();
    //system("pause");

    temp = new Node(5);         // create the next NEW node
    savePtr->setNext(temp);     // set setNext of the PREVIOUS node using address of CURRENT node
    temp->setPrev(savePtr);     // set setPrevious of CURRENT node using saved pointer
    savePtr = temp;             // save address of CURRENT node in savePtr to use with next node
    //savePtr->display();
    //system("pause");

    temp = new Node(7);
    savePtr->setNext(temp);
    temp->setPrev(savePtr);
    savePtr = temp;

    temp = new Node(9);
    savePtr->setNext(temp);
    temp->setPrev(savePtr);
    savePtr = temp;

    temp = new Node(11);
    savePtr->setNext(temp);
    temp->setPrev(savePtr);
    savePtr = temp;

    temp = new Node(13);
    savePtr->setNext(temp);
    temp->setPrev(savePtr);
    savePtr = temp;

//    traverseList(start);
    cout << "\n Start address after Traverse call inside Linked List = " << start << "\n\n";
    *pps = start;
}

















