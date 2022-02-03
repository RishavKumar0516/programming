#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

class student{
    protected: 
       int roll_number;
    public:
       void set_roll_number(int);
       void get_roll_number(void); 
};

void student :: set_roll_number(int r){
   roll_number = r;
}
void student :: get_roll_number(void){
   cout<<"the roll number is "<<roll_number<<endl;
}
 
 class Exam:public student{
     protected:
       int maths;
       int physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
 };
void Exam :: set_marks(float m, float p){
    maths = m;
    physics = p;
}
void Exam :: get_marks(void){
cout<<"the marks obtained in physics are "<<physics<<endl;
cout<<"the marks obtained in maths are "<<maths<<endl;
}

class result:public Exam{
   float percentage;
   public:
   void display(){
       get_roll_number();
       get_marks();
       cout<<"your percentage is "<<(maths + physics)/2<<"%"<<endl;//maths and physics are public methods of Exam class so it is inherited publically.
   }
};

int main()
{ 
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(96.05, 96.08);
    harry.display();
return 0;
}