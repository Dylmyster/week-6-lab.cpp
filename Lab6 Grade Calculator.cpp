#include<iostream>
#include <sstream>
using namespace std;

int main()
{
// Creating Variables //
int students; 
string name; 
int id;
int grade ; 
int z,x,y,g;
int numcourse; 
string lettergrade; 

stringstream summary;

// Welcoming the user to the program and to input the number of students //
cout << "\t--------------Welcome to the grade calculator----------------\n"<<endl; 
cout << "Please Input the number of Students"<<endl; 
cin >> students;

for (int i=0; i<students;i++){

// Asking the student to enter his/her name //
cout<<"Student No. " <<i+1<<" please enter your name"<<endl; 
cin>>name; 

// Asking the user for the number of courses //
cout << "Please Input the number of courses: " ; 
cin >> numcourse;

for (int i=0; i<numcourse;i++){
int g;

// Inputing the grades //
cout << " Please input grade " << i+1<< endl; 
cin>>g; 

z=(z+g); 
x=(z/numcourse);

// Values of the grades, number = what grade you get //
if(x>=90 && x<=100)
lettergrade = 'A';
else if(x>=80 && x <90)
lettergrade = 'B';
else if (x>=70 && x <80)
lettergrade = 'C';
else if (x>=60 && x <70)
lettergrade = 'D';
else if (x>=0 && x <60)
lettergrade = 'F';
}

// Telling the user your grade average, and the total grade as well //
cout<<"your average grade is: "<< x<< " Which is an " << lettergrade<<endl; 
summary<<name <<id << "your average grade is: " << x << " Which is an " << lettergrade << "\n";

}

cout<<summary.str();;

system("pause"); 
return 0; 

}