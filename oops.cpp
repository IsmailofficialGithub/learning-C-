#include <iostream>
using namespace std;

class student
{
public:
     string name;
     int age;
     float marks;

     // constructor

     student(string studentName, int studentAge, float studentMarks)
     {
          name=studentName;
          age=studentAge;
          marks=studentMarks;
     }

     void displayStudent(){
          cout<<"Name of Student is "<<name <<endl;
          cout<<"Age of Student is "<<age <<endl;
          cout<<"Marks of Student "<<name << " is " << marks <<endl;

     };
};

int main()
{
     string name; int age; float marks;
     cout<<"Enter Student name ";
     cin>>name;
     cout<<"Enter Student Age";
     cin>>age;
     cout<<"Enter Student Marks";
     cin>> marks;

     student student1(name,age,marks);

     student1.displayStudent();
}