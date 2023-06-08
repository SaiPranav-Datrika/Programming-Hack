Please do let me know, if you find any mistake in the below explanation...

This code explains you how pointer concept works,also refer to the image links for more clarity on the pointer concept.
Please try to run the code by  yourself for better understaning..

Addressing links: pointer concept images
 https://github.com/SaiPranav-Datrika/Programming-Hack/issues/1
 https://github.com/SaiPranav-Datrika/Programming-Hack/issues/2


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    int weight;
};
class Point{
    public:
    int x;
    Point *p;
    /*whenever this part comes for execution,the new pointer p with Node type processes and points
     to a address of the block type of Node..*/
    
    Point(int x_){
        cout<<&p<<" ";
        x=x_;
    }
};
void Addressing_Concept(Node *temp){
    cout<<temp<<" ";
    cout<<temp->data;
    cout<<temp->weight<<" ";
    
}


int main() {
  Node *temp;  /*Here your indicating that your pointing to a address of type Node(in Heap),
   which means your defining a number(address) with space Node type..*/
  temp=new Node();
  cout<<temp<<" ";//Here the address remains same though you run any number of times you run the code since it is referring to the address..
  
  Node *temp3=temp;//Here your giving an address of the block of Node type to Node type pointer..
  cout<<temp3<<" ";
  Node temp2;  //Here your defining a block of memory of type Node
  temp2.data=0;
  temp2.weight=0;
  cout<<&temp2<<" "; /*here address of this block of memory changes as and when you execute the code..
                       which means machines choice to allocate address..*/
  cout<<temp2.data<<" ";
  Addressing_Concept(temp3);// Here your referring to the same address again.. 

   Point p1(10);

	return 0;
}
