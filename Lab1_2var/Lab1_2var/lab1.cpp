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

public: Abiturient(string msurname, string mname, string mpytronymic, string mcity, int mbal) {
			surname = msurname;
			name = mname;
			pytronymic = mpytronymic;
			city = mcity;
			bal = mbal;
}

public:~Abiturient(){
}
};
class Product{
public:
	string naimen = "Cheese";
	string proizvod = "KOMO";
	int price = 450;
	string srok_hran = "Two month";
	int kolvo = 100;
};
class Drob{
public:
	int chis;
	const char razd = '/';
	int znam;
};class Data{
public:
	int day;
	int month;
	int year;
};
int main(){
	Abiturient qqq("Avdil", "Salie", "Lenurovna", "Belogorsk", 4);
	Product wwq;
	Drob qqw;
	Data www;
	int n, p;
	cout << "Abiturient: " << qqq.surname << " " << qqq.name << " " << qqq.pytronymic << endl;
	cout << qqq.city << " " << qqq.bal << endl;
	cout << "Product: " << wwq.naimen << " " << wwq.proizvod << " " << wwq.price << " " << wwq.srok_hran << " " << wwq.kolvo << endl;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter p: ";
	cin >> p;
	qqw.chis = n;
	qqw.znam = p;
	cout << "Drob: " << qqw.chis;
	cout << qqw.razd;
	cout << qqw.znam << "=" << n / p << endl;
	int day, month, year;
	cout << "Enter day: "; cin >> day;
	cout << "Enter month: "; cin >> month;
	cout << "Enter year: "; cin >> year;
	www.day = day;
	www.month = month;
	www.year = year;
	cout << "Data: " << www.day << "." << www.month << "." << www.year << endl;
	cin.get();
	cin.get();
}