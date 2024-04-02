#include <iostream>
#include "ShallowClass.h"
#include "DeepClass.h"

using namespace std;

int main()
{
    cout << boolalpha;
    cout << "------ShallowClass: Output Values and Locations after an equivalence operator--------" << endl;
    //TODO Create the two ShallowClass Objects, and use the equivalence operator "="
    //     Output them using toString, then call both ShallowEqual and DeepEqual
    ShallowClass shallowx(5, 7);
    ShallowClass shallowy;

    shallowy = shallowx;


    cout << shallowx.toString();
    cout << endl;
    cout << shallowy.toString();
    cout << endl;
    cout << endl;
    cout << "First shallow equals second? " << shallowx.ShallowEqual(shallowy);
    cout << endl;
    cout << "First deep equals second? " << shallowx.DeepEqual(shallowy);
    cout << endl;
    cout << endl;

    cout << "---------Set Values of Second Object and toString Again -----------" << endl;
    //TODO call both setters on the second object, then call toString on both objects again
    shallowy.setInt(10);
    shallowy.setPtr(20);


    cout << shallowx.toString();
    cout << endl;
    cout << shallowy.toString();
    cout << endl;
    cout << endl;

    cout << "------DeepClass: Output Values and Locations after an equivalence operator--------" << endl;
    //TODO Create two DeepClass Objects, and use the equivalence operator "="
    //     Output them using toString, then call both ShallowEqual and DeepEqual

    DeepClass Deepx(8, 9), Deepy;
    Deepy = Deepx;
    cout << Deepx.toString();
    cout << endl;
    cout << Deepy.toString();
    cout << endl;
    cout << "Third shallow equals forth? " << Deepx.ShallowEqual(Deepy);
    cout << endl;
    cout << "Third deep equals fourth? " << Deepx.DeepEqual(Deepy);
    cout << endl;
    cout << endl;


    cout << "---------Set Values of Fourth Object and toString Again -----------" << endl;
    //TODO call both setters on the fourth object, then call toString on both objects again
    Deepy.setInt(30);
    Deepy.setPtr(40);
    cout << Deepx.toString();
    cout << endl;
    cout << Deepy.toString();
    cout << endl;
    cout << endl;


    cout << "------DeepClass: Output Values and Locations after a copy constructor--------" << endl;
    //TODO Create another DeepClass object, by explicitly using the copy constructor with one of the existing DeepClass objects
    //     Call toString on the these two objects

    DeepClass Deepz(Deepy);
    cout << Deepy.toString();
    cout << endl;
    cout << Deepz.toString();
    cout << endl;
    cout << endl;


    cout << "---------Set Values of each Object and toString Again -----------" << endl;
    //TODO Call setInt on one DeepClass object, and setPtr on the other. Use toString again
    Deepy.setInt(5000);
    Deepz.setPtr(1000);
    cout << Deepy.toString();
    cout << endl;
    cout << Deepz.toString();
    cout << endl;
    cout << endl;

    cout << "-----------Does a ShallowObject DeepEqual itself? What about a DeepObject?---------" << endl;
    //TODO Use DeepEqual on both a ShallowClass object and DeepClass object. Both making the comparison to themselves.
    //     Write a comment explaining the results, and why they occur
    cout << "First deep equals first? " << shallowx.DeepEqual(shallowx);
    cout << endl;
    cout << "Third deep equals third?  " << Deepz.DeepEqual(Deepz);
    cout << endl;
    cout << endl;
    //comment
    cout << "The first shallow equals itself because it makes a copy of the same address. The third deep does not equal itself because it creates a seperate copy from the object!";
    cout << endl;
}