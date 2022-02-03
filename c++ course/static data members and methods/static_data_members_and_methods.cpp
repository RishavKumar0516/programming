 #include<iostream>
 using namespace std;
 
// /* global variable decleration here:- */

// class Employee{
//     int id;
//     static int count;

//     public:
     
//      void setData(void){
//          cout<<"Enter the id "<<endl;
//          cin>>id;
//          count++;
//      }

//      void getData(void){
//          cout<<endl<<"the id of the employee is "<<id<<" and these is employee number is "<<count<<endl;
//      }
// };

// int Employee::count =0;
 
// int main()
// {
//  Employee rohan,sohan,mohan;

//  rohan.setData();
//  rohan.getData();

//  sohan.setData();
//  sohan.getData();

//  mohan.setData();
//  mohan.getData();

// return 0;
// }

class Employee{
    char name[10];
    int id;
    float salary;

    public:
    
    void getData(void);
    void setData(void);


};


    void Employee::getData(void){
       cout<<"please Enter the name "<<endl;
       cin>>name;
       cout<<"please Enter the Id "<<endl;
       cin>>id;
       cout<<"please Enter the salary "<<endl;
       cin>>salary;

    }

    void Employee::setData(void){
       cout<<"The name of the employee is "<<name<<endl;
       cout<<"The id of the employee is "<<id<<endl;
       cout<<"The salary of the employee is "<<salary<<endl;
    }

int main(){

    Employee worker[10];

    for(int i=0;i<3;i++){
        worker[i].getData();
    }

    for(int i=0;i<3;i++){
        worker[i].setData();
    }

}
