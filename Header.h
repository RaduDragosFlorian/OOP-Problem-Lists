#pragma once
#include <string>
using namespace std;
//Def and declaration
struct node {
	string name;
	float grade;
	node* next=NULL;
};

void add_element(node*& first, string name, float grade);
void print_elements(node*& first);
void sort_elements(node*& first);
void search_element(node*& first,string find_name);
void divide_elements(node*& first, node*& first1, node*& first2);
