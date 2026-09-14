#include <iostream>
using namespace std;
int main(){
    char choice;
    int rows; 
    do{
        int temp,temp2;
	cout << "=====================Electricity Bill Calculater==================\n\n";
	int a,bill;
	cout << "Enter the number of units consume: ";
	cin >> a;
	if (a>=0 && a<=100){
		bill=a*5;
	}
	else if (a>=101 && a<=300){
		temp=100*5;
		a=a-100;
		bill=(a*8)+temp;
	}
	else if (a>300){
		temp=100*5;
		a=a-100;
	temp2=200*8;
	a=a-200;
	bill=(a*12)+temp+temp2;
	
	}

bill=bill+75;
cout<<"\n\nTotal Bill Amount: "<<bill<<endl<<endl;
if(bill<=1000){
	cout<<" Low usage\n";

}
else if(bill>1000&& bill <=3000){
	cout<<"Medium usage\n";
}
else {
	cout<<"High usage\n";
}












cout<<"\n\nDo you want to try again(y/n)";
cout<<"\nEnter your choice: ";
cin>>choice;
    }
    while (choice=='y');
    
    cout<<"Okay thanks\n\nProgram Ended!";

return 0;
}