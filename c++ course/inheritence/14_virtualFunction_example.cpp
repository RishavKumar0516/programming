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
        virtual void display(){}
 };

 class cwhvideo : public cwh{
     float videolength;
     public:
        cwhvideo(string s, float r, float vl): cwh(s, r){
            videolength = vl;
        }
        void display(){
            cout<<"these is an amazing video with title "<<title<<endl;
            cout<<"ratings: "<<rating<<"outof 5 star"<<endl;
            cout<<"length of the video is: "<<videolength<<"minutes"<<endl;
        }
 };
 class cwhtext: public cwh{
     int words;
     public:
       cwhtext(string s, float r, int wc) : cwh(s, r){
           words = wc;
       }
        void display(){
            cout<<"these is an amazing text tutorial with title  "<<title<<endl;
            cout<<"ratings of the text tutorial is: "<<rating<<"outof 5 star"<<endl;
            cout<<"number of words in these tutorial: "<<words<<"minutes"<<endl;
        }
 };
int main()
{
 string title;
 float rating, vlen;
 int words; 

 /* forcwh video */
 title = "code c++ along with javascript";
 vlen = 4.56;
 rating = 4.89;
 cwhvideo djvideo(title, rating, vlen);
 djvideo.display();

 /* for text */
  title = "code c++ along with javascript";
 words = 4.56;
 rating = 4.89;
 cwhtext djtext(title, rating, words);
 djtext.display();

 cwh* tuts[2];
 tuts[0] = &djvideo;
 tuts[1] = &djtext;

 cout<<"using pointer displaying the function"<<endl;

 tuts[0]->display();
 tuts[1]->display();
return 0;
}