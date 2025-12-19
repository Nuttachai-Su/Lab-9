#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int count = 1;
	double IL, IrpY, Yp, It, Total, Nb, Pbl;
	cout << "Enter initial loan: ";
	cin >> IL;
	cout << "Enter interest rate per year (%): ";
	cin >> IrpY;
	cout << "Enter amount you can pay per year: ";
	cin >> Yp;

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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	Nb = IL;
	while (Nb > 0)
	{
		It = Nb*(IrpY/100);
		Total = Nb+It;
		if(count!=1) Pbl=Nb;
		else Pbl=IL;
		if (Total <= Yp) Yp=Total;
		Nb=Total;
		if (Nb >= Yp) Nb=Total-Yp;
		else Nb = 0;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << count; 
		cout << setw(13) << left << Pbl;
		cout << setw(13) << left << It;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Yp;
		cout << setw(13) << left << Nb;
		cout << "\n";	
		count++;

	}

	return 0;
}
