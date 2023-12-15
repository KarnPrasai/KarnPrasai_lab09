#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double my_loan;
	double rpy;
	double ppy;
	cout << "Enter initial loan: ";
	cin >> my_loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;
	double NewBalance = my_loan;
	double PrevBalance , Interest , Total , Payment;
	int EndYear = 1;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(NewBalance != 0)
	{
		PrevBalance = NewBalance;
		Interest = PrevBalance * rpy / 100;
		Total = PrevBalance + Interest;
		if(Total > ppy)
			Payment = ppy;
		else
			Payment = Total;
		NewBalance = PrevBalance + Interest - Payment;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << EndYear; 
		cout << setw(13) << left << PrevBalance; 
		cout << setw(13) << left << Interest; 
		cout << setw(13) << left << PrevBalance + Interest;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		EndYear++;
	}
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	return 0;
}
