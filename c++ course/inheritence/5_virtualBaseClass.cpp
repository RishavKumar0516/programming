#include<iostream>
using namespace std;
 
/* global variable decleration here:- */

/* case: 1 start */
class student{
    protected:
       int roll_number;
    public:
       void set_number(int a){
           roll_number = a;
       }
       void print_number(void){
           cout<<"Your roll number is "<<roll_number<<endl;
       }
};
class test : virtual public student{
    protected:
        float math, physics;
    public:
        void setMarks(float m1, float m2){
            math = m1;
            physics = m2;
        }
        void printMarks(void){
            cout<<"Your result is here: "
            <<"math "<<math<<endl
            <<"physics "<<physics<<endl;
        }
} ;
class sports : virtual public student{
    protected:
          float score;
    public:
          void setScore(float sc){
              score = sc;
          }
          void printScore(void){
              cout<<"your pt score is "<<score<<endl;
          }  
};
class result : public test, public sports{
    private: 
        float  total;
    public:
        void display(void){
            total = math + physics + score;
            print_number();
            printMarks();
            printScore();
            cout<<"Your total score is : "<<total<<endl;
        }
};
/* case: 1 end */

/* case: 2 start */
class match{
    int player;
 public:
    void set_player(int p){
        player = p;
    }
    void print_player(void){
        cout<<"the numbwe of player is persent in practice match is "<<player<<endl;
    }
};
class batsman : virtual public match{
    int numberOfbatsman;
 public:
    void set_numberOfbatsman(int num){
        numberOfbatsman = num;
    }
    void print_numberOfbatsman(void){
        cout<<"The number of batsman in a team is: "<<numberOfbatsman<<endl;
    }
};
class bowler : virtual public match{
    int numberOfbowler;
 public:
    void set_numberOfbowler(int num){
        numberOfbowler = num;
    }
    void print_numberOfbowler(void){
        cout<<"The number of bowler in a team is: "<<numberOfbowler<<endl;
    }
};

/* case: 2 end */
 
int main()
{
 result rishav;
 rishav.set_number(4200);
 rishav.setMarks(98.2, 96.4);
 rishav.setScore(9);
 rishav.display();

return 0;
}