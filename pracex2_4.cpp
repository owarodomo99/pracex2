#include <iostream>
#include <cmath>
#include<cstdlib>

using namespace std;

//Write prototype of  sg() here.
double sg(double x,double y);

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

double max(double i,double j){
    double a;
    if(i>j){
        a=i;
    }else{
        a=j;
    }
    return a;
    
}

double min(double i,double j){
    double a;
    if(i<j){
        a=i;
    }else{
        a=j;
    }
    return a;
}
double sg(double x,double y){
    double a;
    double b = 0;
    if(x<=0 or y<=0){
        a=0;
    }else
	if((max(x,y)/min(x,y))<=10){
        a = pow((x*y),0.5);
    }else{
    	
       a= sg(x,(pow((x*y),0.5))) + sg(y,(pow((x*y),0.5)));
        
    }
    return a;
}
//Write function definition of  sg() here.

