#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct info {

	string name;
	int age;
	string phoneNumber;
	string email;
	string city;
};

int main() {

	//fstream - read and write
	//ofsteam - write
	//ifsteam - read


	//OFSTREAM


	/*ofstream fout;
	string fileName = "ITSTEP.txt";*/
	//cin >> fileName;
	//fout.open("ITSTEP.txt");
	/*fout.open(fileName, fstream::app);

	bool isOpen = fout.is_open();
	if (isOpen == false)
	{
		cout << "Error: file is not open!" << endl;
	}
	else
	{
		cout << "File is opened!" << endl;
		fout << "Andrii" << endl;
		fout << "Riabii" << endl;
		fout << "cuand236316@gmail.com" << endl;
		string text;
		cout << "Enter name: ";
		cin >> text;
		fout << text << "\n";
	}
	
	fout.close();
	*/

	/*ofstream fout;
	info user;

	fout.open("myInfo.txt", fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == false)
	{
		cout << "Can not open the file" << endl;
	}
	else {
		cout << "Enter your name: ";
		cin >> user.name;
		fout << "Name: "<< user.name << endl;
		cout << "Enter your age: ";
		cin >> user.age;
		fout <<"Age: " << user.age << endl;
		cout << "Enter your phone number: ";
		cin >> user.phoneNumber;
		fout << "Phone number: " << user.phoneNumber << endl;
		cout << "Enter your email: ";
		cin >> user.email;
		fout << "Email: " << user.email << endl;
		cout << "Enter your city: ";
		cin >> user.city;
		fout << "City: " << user.city << endl;

	}

	fout.close();*/


	//IFSTREAM

	/*string fileName = "ITSTEP.txt";
	ifstream fin;
	fin.open(fileName);

	bool isOpen = fin.is_open();
	if (isOpen == false)
	{
		cout << "Can not open the file" << endl;
	}
	else
	{
		cout << "File is opened" << endl;

		//1. by symbols
		char data1;
		while (fin.get(data1))
		{
			cout << data1;
		}

		//2. before space
		string data2;
		while (!fin.eof())
		{
			data2 = "";
			fin >> data2;
			cout << data2 << endl;
		}



		//***

		//3. by line***the best way
		string data3;
		while (!fin.eof())
		{
			data3 = "";
			getline(fin, data3);
			cout << data3 << endl;
		}

		//***

		//4by line BUT you must know size (stupid way)
		char data4[50];
		while (!fin.eof())
		{
			fin.getline(data4, 50);
			for (int i = 0; i < 50; i++)
			{
				cout << data4[i] ;
			}
		}
	}*/











	system("pause");
	return 0;
}