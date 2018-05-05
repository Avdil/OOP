#include<iostream>
#include<string>
using namespace std;
	class Abiturient{
	public: //Student();
		string surname;
		string name;
		string pytronymic;
		string city;
		int bal;
	};
	class Product{
	public:
		string naimen;
		string proizvod;
		int price;
		int srok_hran;
		int kolvo;
	};
	class Drob{
	public:
		int chis;
		int znam;
	}; 
	class Data{
	public:
		int day;   
		int month;
		int year;
	};
	int main(){
		Abiturient qqq;
		qqq.surname = "Avdil";
		qqq.name = "Salie";
		qqq.pytronymic = "Lenurovna";
		qqq.city = "Belogorsk";
		qqq.bal = 3;
		cout << "Abiturient: " << qqq.surname << "\n" << qqq.name << "\n" << qqq.pytronymic;
		cin.get();
		cin.get();
}