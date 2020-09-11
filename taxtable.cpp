#include <iostream>
#include <iomanip>

using namespace std;

int main (){
	//Variables
	double firstPrice, lastPrice, step, taxPercent;
	const int priceWidth = 15;
	const int taxWidth = 20;
	const int priceWithTaxWidth = 30;
	bool invalidInput;
	
	//Input
	cout << "INPUT PART" << endl << "==========" << endl;
	do{
		cout << "Enter first price: ";
		cin >> firstPrice;
		invalidInput = (firstPrice <= 0);
		if(invalidInput){
			cout << "ERROR: First price must be at least 0 (zero) SEK" << endl;
		}
	}while(invalidInput);
	do{
		cout << "Enter last price : ";
		cin >> lastPrice;
		invalidInput = (lastPrice <= firstPrice);
		if(invalidInput){
			cout << "ERROR: Last price must be larger than first price" << endl;
		}
	} while (invalidInput);
	do{
	cout << "Enter stride     : ";
	cin >> step;
	invalidInput = (step <= 0.01);
	if(invalidInput){ cout << "ERROR: Stride must be at least 0.01" << endl;}
	}while(invalidInput);
	do{
		cout << "Enter tax percent: ";
		cin >> taxPercent;
		invalidInput = (taxPercent < 0);
		if(invalidInput) { cout << "ERROR: Tax percentage must non-negative" << endl;}
	}while(invalidInput);
	//Start Tax table print
	cout << endl << "TAX TABLE" << endl << "=========" << endl;
	//Print Header
	cout << setw(priceWidth) << "Price" << setw(taxWidth) << "Tax" << setw(priceWithTaxWidth) << "Price with tax" << endl << setw(priceWidth+taxWidth+priceWithTaxWidth) << setfill('-') << "" << endl;
	cout << setfill(' ') << fixed << setprecision(2);
	for(int i = 0; i*step <= lastPrice-firstPrice; i++){
		float currentPrice = firstPrice+i*step;
		cout << setw(priceWidth) << currentPrice << setw(taxWidth) << currentPrice*(taxPercent/100.0) << setw(priceWithTaxWidth) << currentPrice*(1+taxPercent/100.0) << endl;
	}
}