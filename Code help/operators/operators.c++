#include <iostream>
using namespace std;

int main(){
    // cout << "Hello phir se in this duniya" <<endl;
    // cout << "This is next line." <<'\n';
    // cout << "This is Another line." <<endl;

    //Data types and variable

    int a  = 5;
    cout<<a <<endl ;

    char b = 'P'; 
    cout<<b <<endl ;

    float f = 1.2;
    cout<<f <<endl;

    double d =1.23;
    cout<<d  <<endl;

    int size = sizeof(a);
    cout<< "The size of a is " <<size <<endl;

    //Operators

    int div = 2/5;
    cout<< div <<endl; //Output is 0 , because int/int = int;

    float flt = 2.0/5;
    cout<< flt <<endl;

    double dou = 2.00/5;
    cout<< dou <<endl;

    //Relational Operators

    int c = 3;
    int e = 4;

    bool firstCheck = (c==e);
    cout<<firstCheck <<endl ; 

    bool secondCheck = (c<e);
    cout<<secondCheck <<endl ;

    bool thirdCheck = (c>e);
    cout<<thirdCheck <<endl ; 

    bool fourthCheck = (c<=e);
    cout<<fourthCheck <<endl ; 

    bool fifthCheck = (c>=e);
    cout<<fifthCheck <<endl ; 

    //Logical Operators ==  &&, ||, !

    int t = 5;
    cout<<!t <<endl;

    //Bit wise operators
    

    return 0 ;
}