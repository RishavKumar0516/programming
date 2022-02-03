#include<iostream>
using namespace std;
 
/* global variable decleration here:- */
  class cwh{
     protected:
       string title;
       float rating;
     public:
       cwh(string s, float r){
           title = s;
           rating = r;
       }
       virtual void display() = 0;
 };
 class cwhvideo : public cwh {
     float videolength;
     public:
     cwhvideo(string s, float r, float k) : cwh(s, r){
         videolength = k;
     }
     void display(){/* if we comment these display function then, we get error message. */
         cout<<"the title of the video is :"<<title<<endl;
         cout<<"the rating of the video is :"<<rating<<endl;
         cout<<"the videolength of the video is :"<<videolength<<endl;
     }

 };
 class cwhtext : public cwh {
     float textlength;
     public:
     cwhtext(string s, float r, float k) : cwh(s, r){
         textlength = k;
     }
     void display(){
         cout<<"the title of the text is :"<<title<<endl;
         cout<<"the rating of the text is :"<<rating<<endl;
         cout<<"the videolength of the text is :"<<textlength<<endl;
     }

 };

int main()
{
char *title = new char[30];
float rating, vlen;
int words;
title = "django tutorial";
vlen = 4.56;
rating = 4.89;
cwhvideo djvideo(title, rating, vlen);
djvideo.display();
return 0;
}