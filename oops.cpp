#include <iostream>
using namespace std;

     /// ===========class of book info 
// class bookInfo{
//      public:
//      string name;
//      string author;
//      string bookId;
//      bool avilable;


//      // constructor

//      bookInfo(string bookName,string bookAuthor,string bookUniId ){
//           name=bookName;
//           author=bookAuthor;
//           bookId=bookUniId;
//           avilable=0;
//      }

//      // display function

//     void displayBookInfo(){
//           cout<<"Name : "<<name<<endl;
//           cout<<"Author : "<<author<<endl;
//           cout<<"ISBN licence : "<<bookId<<endl;
//           cout<<"Avilable : "<<(avilable ? "Yes" :"No")<<endl;
//      };

//      // is book avalible
//           void isAbilable(){
//                if(avilable){
//                     cout<<"Book is Avalible ";
//                }else{
//                     cout<<"Book is Not Avalible "; 
//                }
//           }
// };


          // ===========class of employee management
     class employeeInfo{
          public: 
          string name;
          int empId;
          string position;
          float salary;

          // constructor

          employeeInfo(string employeeName,int employeeId,string empolyeePosition,float employeeSalary ){
               name=employeeName;
               empId=employeeId;
               position=empolyeePosition;
               salary=employeeSalary;
          }

          // display function or method

          void displayempolyeeInfo(){
               cout<<"Employee Name is "<<name<<endl;
               cout<<"Employee Id is "<<empId<<endl;
               cout<<"Employee position is "<<position<<endl;
               cout<<"Employee current salary is "<<salary<<endl;
          }

          void increaseSalary(float amount){
                float newSalary=salary+=amount;
               salary=newSalary;
                cout<<"Your salary is increase "<<amount<<" .New salary is "<<newSalary<<endl;
          }


     };

     int main(){

          // ======// book info object 
          // bookInfo book1("The Great Gatsby","Ismail Abbasi","9780743273565");
          // book1.displayBookInfo();
          // book1.isAbilable();

          // ======// Employee detail object 
          employeeInfo emp1("ismail abbasi",540,"softwareEngenier",34.344);
          employeeInfo emp2("ALi",541,"webDeveloper",54.344);
          emp1,emp2.displayempolyeeInfo();
          emp1.increaseSalary(100);


return 0;
     }

























// class or object to get name marks and age from user and save in object or display

// class student
// {
// public:
//      string name;
//      int age;
//      float marks;

//      // constructor

//      student(string studentName, int studentAge, float studentMarks)
//      {
//           name=studentName;
//           age=studentAge;
//           marks=studentMarks;
//      }

//      void displayStudent(){
//           cout<<"Name of Student is "<<name <<endl;
//           cout<<"Age of Student is "<<age <<endl;
//           cout<<"Marks of Student "<<name << " is " << marks <<endl;

//      };
// };

// int main()
// {
//      string name; int age; float marks;
//      cout<<"Enter Student name ";
//      cin>>name;
//      cout<<"Enter Student Age";
//      cin>>age;
//      cout<<"Enter Student Marks";
//      cin>> marks;

//      student student1(name,age,marks);

//      student1.displayStudent();
// }