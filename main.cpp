//p9 Double Ended List
//Rowan Briggs
//May 24, 2018
/* Description:
Implement a Double-Ended, Double-Linked, Priority-Queue List
Double-Ended: can remove both the first and last link
Double-Linked: each Link has a pNext and pPrevious
Priority-Queue: Links are always Inserted in Order
Show the list forward (front to end)
Show the list backward (end to front).
Link with a given value can be removed.

 */
#include <iomanip>
#include <iostream>
using namespace std;

class Link{
    public:
        int data;
    Link *pNext, *pPrev;
    Link(int newData) {
        data = newData;
        pNext = NULL;
        pPrev = NULL;
    }
    void display(){
        //Display format adopted from Gabriel Loring
        //Show memory address of previoius and next pointers
        //as well as self (link itself)
        cout << "{" << setw(3) << data << "\t:\t"
             << setw(14) << pPrev << "\t:\t\t" << &data
             << "\t:\t" << setw(14) << pNext << " }\n";
    }
};

class DoubleEndedList{
    private:
        Link *pFirst, *pLast; //ptr to first link on list

    public:
        DoubleEndedList() {
            pFirst = NULL; //no links on list
            pLast = NULL; //no links on list
        }
        void displayFirst(){
            cout << "First:";
            pFirst->display();
        }
        void displayLast(){
            cout << "Last:";
            pLast->display();
        }
        void displayList(){
            Link *pCurrent = pFirst;
            cout << "List:\n";
            while (pCurrent != NULL) {
                pCurrent->display();
                pCurrent = pCurrent->pNext;
            }
            cout <<" End List" << endl;
            displayFirst();
            displayLast();
            cout << endl;
        }

        void displayBackward() {
            Link *pCurrent = pLast;
            while (pCurrent != NULL) {
                pCurrent->display();
                pCurrent = pCurrent->pPrev;
            }
        }

        void initialLink(int newValue) {
            Link *newLink = new Link(newValue);
            pFirst = newLink;
            pLast = newLink;
        }

        bool isEmpty(){
            return pFirst == NULL; //true iff list is empty
        }

        void insert(int newValue) {
            Link *newLink = new Link(newValue);
            Link *pCurrent = pFirst;

        }

};

int main() {
    DoubleEndedList *del = new DoubleEndedList();
    del->displayList();
    del->insert(1);
    del->displayList();
}
/*
List:
 End List

Process finished with exit code 11

 */