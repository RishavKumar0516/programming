#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<limits.h>
#include<math.h>
#include<windows.h>
#include<stdbool.h>// to use bool ae have to add stdtdbool header file in c.
 void gotoxy(int , int );
 int list();
  void Deposite();
  void Withdraw();
  void Transfer();
  void CheckDetail();
   void Loading();
 
 // create global variable here
  int amount = 0, totalAmount = 1000, Amo = 0, trans = 0;
  int totalDeposite =0, totalWithdraw = 0, totalTransfer = 0;

   void delay(unsigned int mseconds)
   {
     clock_t goal = mseconds + clock();
     while (goal > clock());
   }

 int list(){
    printf("\n\t\t\t================================= Welcome To bank =================================\n");
    printf("\n\t\t\t\t\t\t\t 1. Deposite Amount");
    printf("\n\t\t\t\t\t\t\t 2. Withdraw Amount");   
    printf("\n\t\t\t\t\t\t\t 3. Transfer ");
    printf("\n\t\t\t\t\t\t\t 4. Check Detail");
    printf("\n\t\t\t\t\t\t\t 5. Exit");
    printf("\n\n\t\t\t\t\t\t\t Enter Your Choice\n");
    int ch;
    printf("\t\t\t\t\t\t\t ");
    scanf("%d",&ch);
    return ch;
 }

 void Deposite(){
     printf("\t\t\t\t\tEnter The Amount You Want To Deposite: ");
     scanf("%d",&amount);
     totalAmount += amount;
 }

 void Withdraw(){
     printf("\t\t\t\t\tEnter The Amout You Want To Withdraw: ");
     scanf("%d",&Amo);
     if(Amo <= totalAmount){
         totalAmount -= Amo;
     }else{
         printf("\t\t\t\t\tLess Amount Wthdraw Is Not Possible");
     }
 }

 void Transfer(){
     printf("\t\t\t\t\tEnter The Amount You Want To Transfer: ");
     scanf("%d",trans);
     if(trans <= totalAmount){
         totalAmount -= trans;
     }
     else{
         printf("\t\t\t\t\tLess amount You Transfer Is Not Possible");
     }
 }

 void CheckDetail(){
     printf("\n\t\t\t\t\t\t\t Total Amount : %d",totalAmount);
     printf("\n\t\t\t\t\t\t\t Total Deposite : %d",totalDeposite);
     printf("\n\t\t\t\t\t\t\t Total Withdraw : %d",totalWithdraw);
     printf("\n\t\t\t\t\t\t\t Total Transfer : %d",totalTransfer);
 }

 void Loading(){
    printf("\n\t\t\t\t\t\t\tLoading");
    delay(3000);
    printf(".");
    delay(2000);
    printf(".");
    delay(2000);   
    printf(".");

 }
 
int main()
{
 while(1){
    system ("cls"); //in visual display code clrscr() not works thesefore we are using these function for clearing window.
    Loading();
    switch(list()){
        case 1:
           Deposite();
           totalDeposite += amount;
           break;

        case 2: 
           Withdraw();
           if(Amo <= totalAmount){
               totalWithdraw +=Amo;
           }
           break;

        case 3:
           Transfer();
           if(trans <= totalAmount){
               totalTransfer += trans;
           }
           break;

       case 4:
           CheckDetail();
           break;

       case 5:
           exit(0);

        default :
           printf("\n\t\t\t\t\t\t\t  Default Choice");
    }
    printf("\n\t\t\t\t\t\t\t ");
    getch();// if we press any of the key then these will return to the while loop.
          
 }
return 0;
}

/* exit() function : exit function terminates the calling process without exicuting the rest code which is after the exit function. */