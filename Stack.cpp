// https://github.com/anisa1007/Pertruk_Stack-With-Evaluate-an-Expression.git
// Atika Istiqomah 1817051004
// Anisa Raden 1817051007
// Livia Ayu Istoria H 1817051031
// Mutiara Widdi A 1817051047

//livia ayu 1817051031
#include <iostream>
using namespace std;
struct stack{
  char top= -1;
  char data[10];
  void push(int p){
    data[top++]=p;
  }
  int atas(){
    return data[top];
  }
  int kosong(){
    if(top==-1){
      return 1;}
    else{
      return 0;}
  }
  int pop(){
    if(top==-1){
    cout<<"stack kosong";
    return top;
  }
            else
              [
              top--;
              }
              }
              int push(char p){
                if(top==10-1){
                  cout<<"stack penuh";
                  return top;
                }
                data[++top]=p;
              }
              
