#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b)
{
  int c;
  c = a + b;
  return c;
}


class Employeee{
  public:
    string name;
    int salary;

    Employeee(string nam, int sal ){
      this->name = nam;
      this->salary = sal;
    }

    void printDetails(){
      cout <<"The name of Employeee is "<<this->name <<" and salary is $" <<this->salary <<"." <<endl ;
    };

  private:
    int password;  


};



int main()
{
  // cout << "Hello World!"<<endl;
  // cout << "(This is my first code in c++).";

  // short d= 9;
  // cout <<d;

  // int marksInClass = 65;
  // cout <<marksInClass;

  // float score = 99;
  // cout <<"The score in the class is " <<score <<".";

  // int a, b;
  // cout<<"Enter first number" <<endl;
  // cin>>a;

  // cout<<"Enter second number" <<endl;
  // cin>>b;

  //  cout <<"The sum is " <<a+b <<endl ;
  //  cout <<"The difference is " <<a-b <<endl ;
  //  cout <<"The product is " <<a*b <<endl ;
  //  cout <<"The division without float is " << a/b <<endl ;
  //  cout <<"The division with float  is " <<(float) a/b <<endl ;

  // Conditionals

  //   int age;
  //   cout << "Enter your age" << endl;
  //   cin >> age;

  //   switch (age)
  //   {
  //   case 18:
  //     cout << "Id card required";
  //     break;
  // //Same as in js
  //   default:
  //     break;
  // }

  // if(age>=18 && age<145){
  //   cout<<"You can vote";
  // }
  // else if(age>100){
  //   cout<<"Bhagwan ke pas ja bhai ab";
  // }
  // else if(age<1){
  //   cout<<"janam to le le bhai";
  // }
  // else{
  //   cout<<"You cannot vote";
  // }

  // Loops

  // int index = 2 ;
  // while (index < 100)
  // {
  //   cout<<"I love you " <<index <<" baby." <<endl ;
  //   index++;
  // }

  // for (size_t i = 2; i < 100; i++)
  // {
  //   // cout<<"I love you " <<i <<" baby 😘." <<endl ;
  //   cout<<"I love you baby 😘" <<endl ;
  // }

  // cout<<"The function gives " <<sum(23, 45) <<".";

  //Arrys

  // int arry[] = {0, 2, 4,23,45};
  // cout<<arry[1];

  // int marks[6];
  // for (size_t i = 1; i < 7; i++)
  // {
  //   cout<<"Enter the marks of "<<i <<"th student" <<endl;
  //   cin>>marks[i]; 
  // }
  // for (size_t i = 1; i < 7; i++)
  // {
  //   cout<<"The marks of " <<i <<"th student is " <<marks[i] <<endl;
  // }

  // int arr2D[2][3] ={
  //   {1,2,3},
  //   {4,5,6}
  // };
  // for (size_t i = 0; i < 2; i++)
  // {
  //   for (size_t j = 0; j < 3; j++)
  //   {
  //     cout<<"The value at " <<i <<","<<j <<" is " <<arr2D[i][j] <<endl ;
  //   };
    
  // };

  //STRING

  // string name = "Prakash Pandey";
  // cout<<"The name of world's best human is " <<name <<"." <<endl;
  // cout<<"The lenght of name is " <<name.length() <<"." <<endl;
  // cout<<"The lenght of name is " <<name.substr(0, 7) <<"." <<endl;

 //Object oriented programing
  Employeee pp("Prakash Pandey", 300); 
  // pp.name="Prakash";
  // pp.salary = 200;

  pp.printDetails();

  // cout <<"The name of Employeee is "<<pp.name <<" and salary is $" <<pp.salary <<"." <<endl ;

  cout<<"This is a line to show \nThe line break"<<endl <<"with different Methods.";
  
  return 0;
}
