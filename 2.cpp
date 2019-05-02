#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int x,y,max=0,min=0,t=0;
	cin>>x>>y;
	if(x>y)max=x,min=y;
	else max=y,min=x;
    while(min<=max){
    	if(min%3==0||max%5==0)
    	t++;
    	min++;
	}
    cout<<t;
//    system("pause");
//    return 0;
}
