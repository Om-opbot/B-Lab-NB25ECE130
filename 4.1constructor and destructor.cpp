#include<iostream>
using namespace std;
class Tracer{
    int id;
    public :
      Tracer(int i) : id (i) {cout<< " Construct #"<< id <<endl;}
      ~Tracer()             {cout<< " Dustrue #"<< id <<endl;}
};
int main(){
 cout<<"Enter block\n";
 {Tracer a(1) , b(2) ; cout<<"working \n";}
 return 0;   
}