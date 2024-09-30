#include<iostream>
#include"Bag.h"

using namespace std;

//setunion
Bag<int> setUnion(Bag<int> A, Bag<int> B)
{
    int element;
    Bag<int> C;

    for(int i = 1; i <= A.getItemCount(); i++) {
        C.add(A.getItem(i));
    }
    for(int i = 1; i <= B.getItemCount(); i++) {
        element = B.getItem(i);
        if (!C.contains(element)) {
            C.add(element);
        }
    }

    return C;
}

//intersect
Bag<int> intersection(Bag<int> A, Bag<int> B)
{
    int element;
    Bag<int> C;

    for(int i = 1; i <= A.getItemCount(); i++) {
        element = A.getItem(i);
        if(B.contains(element)) {
            C.add(element);
        }
    }

    return C;
}

//diff
Bag<int> difference(Bag<int> A, Bag<int> B)
{
    int element;
    Bag<int> C;

    for(int i = 1; i <= A.getItemCount(); i++) {
        element = A.getItem(i);
        if(!B.contains(element)) {
            C.add(element);
        }
    }

    return C;
}

int main() {
    cout << "Assignment 2.2 Set Operations" << endl;

    //bags
    Bag<int> A, B;

    //addition act fn
    A.add(1);
    A.add(2);
    A.add(3);
    A.add(4);
    B.add(3);
    B.add(4);
    B.add(5);
    B.add(6);

    //data print
    cout << "Set A: ";
    A.display();

    cout << "Set B: ";
    B.display();

    //Bag fn's
    Bag<int> U = setUnion(A, B);
    cout << "Union (A U B): ";
    U.display();

    Bag<int> I = intersection(A, B);
    cout << "Intersection (A ∩ B): ";
    I.display();

    Bag<int> D = difference(A, B);
    cout << "Difference (A - B): ";
    D.display();

    return 0;
}