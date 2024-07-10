#include <iostream>
using namespace std;

int sum(int a, int b)
{
     int c = a + b;
     return c;
}

int main()
{

     // int a, b;

     // cout << "Enter First Number" << endl;
     // cin >> a;

     // cout << "Enter Second Number" << endl;
     // cin >> b;

     // cout << "a + b =" << a + b << endl;
     // cout << "a - b =" << a - b << endl;
     // cout << "a * b =" << a * b << endl;
     // cout << "a / b =" << (float)a / b << endl;

     // switch statement

     // int age;
     // cout<<"enter Your age";
     // cin>>age;

     // switch(age){

     //      case 1 :
     //      cout<<"age is one "<<age<<endl;
     //      break;
     //      case 2:
     //      cout<<"age is two "<<age<<endl;
     //      break;

     //      default:
     //      cout<<"your age is neither 1 nor 2 year old";
     // }

     ///====`````              loops

     //     ==== // while loops

     // int index = 1;

     // while (index <= 300)
     // {
     //      cout << "we are in index number " << index << endl;
     //      index = index + 1;
     // }

     // ========do while loop
     // int index = 0;
     // do
     // {
     //      cout<<"we are now in index number"<< index<<endl;
     //      index++;

     // } while (index>100);

     // ====for loop

     // for (int i = 0; i < 100; i++)
     // {
     //      cout<<"we are in index "<<i<<endl;
     // }

     // function //
     // int num1,num2;
     // cout<<"enter first number"<<endl;
     // cin>>num1;
     // cout<<"enter second number"<<endl;
     // cin>>num2;

     // cout<<"function returns "<<sum(num1,num2)<<endl;

     // ====array in c++
     // 1 dimensional array

     //      int stdMarks[5];
     //      int totalMarks=0;

     //      for (int i = 0; i < 5; i++)
     //      {
     //           cout<<"Enter Number of student No "<<i+1<<endl;
     //           cin>>stdMarks[i];
     //      }

     //      for (int i = 0; i < 5; i++)
     //      {
     //           cout<<"marks of studnent "<<i+1 <<" is "<<stdMarks[i]<<endl;
     //           totalMarks += stdMarks[i];
     //      }
     //    cout << "Total Marks of all students is " << totalMarks << endl;

     // 2 dimissional array

     // int array[3][4]={
     //      {1,2,3,4},
     //      {6,7,8,9},
     //      {10,11,12,13},
     // };

     // cout<<"array value is "<<array[2][3]<<endl;

     //    int array[3][4]={
     //      {1,2,3,4},
     //      {6,7,8,9},
     //      {10,11,12,13},
     // };

     // for(int i=0;i<3;i++){

     //      for(int j=0;j<4;j++){

     //           cout<<"array value is "<<array[i][j]<<endl;

     //      }

     // }

     int array[10][5];

     cout << "enter 9 number" << endl;

     for (int i = 0; i < 10; i++)
       {

               for (int j = 0; j < 5; j++)
               {
                    cout << "Element are [ " << i << "],[" << j << " ]: ";
                    cin >> array[i][j];
               }
               
       }

     cout << "The Array is" << endl;

     for (int i = 0; i < 10; i++)
          {
             
               for (int j = 0; j < 5; j++)
               {
                    cout << array[i][j] << ",";
               }

          }

     return 0;
}