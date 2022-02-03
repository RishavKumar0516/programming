#include<bits/stdc++.h>
using namespace std;
 
/* global variable decleration here:- */

/* =====================   STACK   =====================*/
/* 
   stack follows LIFO principal. it means the element which is inserted last will be 
   served first.
   it is implemented using array/linked list.
 */
 
int main()
{

    stack<int> st;  // these creates an empty stack
    //the function which is required for stack
    /*                                           |            | 5
      pop                                        |    5       | 4                     
      push emplase                               |    1       | 3
      size                                       |    3       | 2
      empty                                      |    4       | 1
      full                                       |____2_______| 0
     */                                          

    st.push(2);  //insert the element in stack
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(5);

    cout<<st.top(); //prints the top most element of the stack 5
    st.pop() ;  // deletes the top most element of the stack 5
    cout<<st.top(); //prints the top most element of the stack 1
    st.pop() ;  // deletes the top most element of the stack 1
    cout<<st.top(); //prints the top most element of the stack 3
    st.pop() ;  // deletes the top most element of the stack 3
    cout<<st.size()<<endl;  // returns the size of the stack
    bool flag = st.empty(); // returns true if stack is empty else false

    // to delete the entire stack 
    while(! st.empty()){
        st.pop();
    }

    stack<int> st2;
 
    if( ! st2.empty()){
        cout<<st2.top() <<endl; //throw error
    }
    /* 
     If you have just created a stack and no any element is in it, then when you do
     st2.top()  it will give you error, because stack should always have an element
     in order to apply stack.top().

     so always check the stack is empty or not before doing stack.top() either it 
     will give you RUNTIME ERROR
     */

 
return 0;
}