#include <iostream>
#include "MyException.h"

using namespace std;
double dividir(double,double);
double divide(double,double);
int main() {
    double a,b;
    cin>>a;
    cin>>b;
    /*
    try{
        double c = dividir(a,b);
        std::cout << c << '\n';
    }catch(const char* err){
        return 1;
    }
    */
    try{
        double c = divide(a,b);
        double d = dividir(a,b);
        std::cout << c << '\n';
        std::cout << d << '\n';
    }
    catch(MyException& e){
        cerr << e.what();
        return 1;
    }catch(const char* err){
        cerr<<err<<endl;
        return 1;
    }catch(...){ std::cout << "ERROR DEsconocido" << '\n'; }
    return 0;
}

double dividir(double a , double b){
    if (b==0) {
        throw "ERROR, CANNOT COMPUTE. YOUR LEVEL OF STUPIDITY IS AMAZING.";
    }else{
    return a/b;
    }
}

double divide(double a, double b){
    if (b==0) {
        throw MyException();
    }else{
    return a/b;
    }

}
