#include <iostream>
#include <stdio.h>
#include "Header.h";
#include <string>
using namespace std;


int main()
{
	int n;
	int menu;
	int OK{ 1 };
	node* all_participants = NULL;
	cout << "Insert the number of participants: ";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++) {
		string name;
		float grade;
		cin.ignore();
		cout << "Insert participant's name: ";
		getline(cin, name);
		cout << "Insert participant's grade: ";
		cin >> grade;
		add_element(all_participants, name, grade);
		cout << endl;
	}
	while (OK) {
		cout << endl << endl << "1. Add participants to the list" << endl << "2. Show participants list " << endl << "3. Sort list by grade" << endl << "4. Search for participant's name" << endl << "5. Show results" << endl << "0. Quit" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			cout << "Insert the number of participants: ";
			cin >> n;
			cout << endl;
			for (int i = 0; i < n; i++) {
				string name;
				float grade;
				cin.ignore();
				cout << "Insert participant's name: ";
				getline(cin, name);
				cout << "Insert participant's grade: ";
				cin >> grade;
				add_element(all_participants, name, grade);
				cout << endl;
			}
			break;
		}
		case 2:
		{print_elements(all_participants);
		break; }
		case 3: {
			sort_elements(all_participants);
			print_elements(all_participants);
			break; }
		case 4: {
			cout << endl << "Insert participant's name: ";
			string find_name;
			cin.ignore();
			getline(cin, find_name);
			cout << endl;
			search_element(all_participants, find_name);
			break; }
		case 5: {
			node* rejected_participants = NULL;
			node* admitted_participants = NULL;
			divide_elements(all_participants,rejected_participants, admitted_participants);
			cout << endl << "Admitted participants:";
			print_elements(admitted_participants);
			cout<< endl << endl << "Rejected participants:";
			print_elements(rejected_participants);
			delete admitted_participants;
			delete rejected_participants;
			break; }
		case 0:
			OK = 0;
			break;
		default:
			cout << endl << "ERROR : Invalid key, try again." << endl;
				break;
		}
	}
	
	delete all_participants;
	

	

	
}