#include<iostream>
#include<cstring>
using namespace std;
class Mystring {
    char*data;
    public:
    Mystring(const char*str){
        data=new char[strlen(str)+1];
        strcpy(data,str);
    }
    Mystring(const Mystring &o){
        data= new char[strlen(o.data)+1];
        strcpy(data,o.data);
    }
    ~Mystring(){
        delete[] data;
    }
    void print() const {cout<<data<<endl;}
};
int main(){
    Mystring a("Hardware");
    Mystring b=a;
    a.print();
    b.print();
    return 0;
}