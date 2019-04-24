// https://github.com/anisa1007/Pertruk_Stack-With-Evaluate-an-Expression.git
// Atika Istiqomah 1817051004
// Anisa Raden 1817051007
// Livia Ayu Istoria H 1817051031
// Mutiara Widdi A 1817051047

//Atika Istiqomah 1817051004
#include <iostream>
using namespace std;
struct stack
{
  char top= -1;
  char data[10];
  void push(int p)
  {
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
  
  //Anisa Raden 1817051007
  void cetak ()
  {
    for (int i=0; i<top; i++)
     {
        cout<<data[i];
     }
  }
};

int Operator (char p)
{
  if (p=='^')
  return 3;
  else if (p=='*' || p=='/')
  teturn 2;
  else if (p=='+' || p=='-')
  return 1;
  else return -1;
}

int main ()
{
  int hasil,p;
  string b,c;
  char opr;
  stack d;
  cout<<"Masukkan Ekspresi Infix : ";
  cin>>b;
  cout<<endl;
  
  p=b.lenght();
  for (int i=0; i<p; i++)
  {
    if (b[i] >= '0' && b[i] <= '9')
    {
      c+=b[i];
    }
    else if (b[i] == '(')
    {
      d.push(b[i]);
    }
    
    //Livia Ayu Istoria Hernani 1817051031
    
    else if (b[i] == ')') {
       while (d.kosong() != 1 && d.atas() != '(') {
         char x=d.atas();
         d.pop();
         c+=x;
       }
    if (d.atas() == '(') {
        d.pop();
        }
    }
    if (b[i] == '+' || b[i] == '-' || b[i] == '*' || b[i] == '/') {
        if  (d.kosong() == 1 ||d.atas()  == '(') {
            d.push(b[i]);
        }
    else {
        while (d.kosong() != 1 && d.atas() != '(' && Operator(b[i]) <= Operator(d.atas())) {
            char x=d.atas();
            d.pop();
            c+=x;
        }
        d.push(b[i]);
        }
    }
  }
  while (d.kosong() != 1) {
      char x=d.atas();
      d.pop();
      c+=x;
    }
  
  cout<<"Bentuk Postfix \t: "<<c<<endl<<endl;
  for(int i=0;i<=p;i++) {
      if (c[i] >= '0' && c[i] <= '9') {
        d.push(c[i]);
      }
