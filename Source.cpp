#include <iostream>
#include "Header.h";
#include <string>
using namespace std;
void add_element(node*& first, string name, float grade) {
	node* added_element = new node;
    added_element->name = name;
    added_element->grade = grade;
    if (first == NULL)
    {
        first = added_element;
    }
    else
    {
        node* aux = first;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = added_element;
    }
}


void print_elements(node*& first) {
    if (first == NULL) {
        cout << endl << "Empty list" << endl;
    }
    node* print_aux = first;
    while (print_aux != NULL) {
        cout << endl << "Name: " << print_aux->name << "  Grade: " << print_aux->grade;
        print_aux = print_aux->next;
    }
}

void sort_elements(node*& first) {
    node* current_element = first;
    node* next_element = NULL;
    node* aux = new node;
    if (first == NULL);
    while (current_element != NULL) {
        node* next_element = current_element->next;
        while (next_element != NULL) {
            if (current_element->grade > next_element->grade) {
                aux->grade = current_element->grade;
                aux->name = current_element->name;
                current_element->grade = next_element->grade;
                current_element->name = next_element->name;
                next_element->grade = aux->grade;
                next_element->name = aux->name;
            }
            next_element = next_element->next;
        }
        current_element = current_element->next;
    }
    delete aux;

}

void search_element(node*& first, string find_name) {
    node* search_aux = first;
    int k = 0;
    while (search_aux != NULL) {
        if (search_aux->name == find_name) {
            cout << endl << "Name found: " << search_aux->name << " Grade: " << search_aux->grade << endl;
            k++;
        }
        
        search_aux = search_aux->next;
    }
    if (k == 0)
        cout << endl << "Name not found." << endl;
}



void divide_elements(node*& first, node*&first1, node *& first2) {
    node* search_aux = first;
    while (search_aux != NULL) {
        node* added_aux = new node;
        added_aux->grade = search_aux->grade;
        added_aux->name = search_aux->name;
        if (search_aux->grade <5) {
            if (first1 == NULL)
            {
                first1 = added_aux;
            }
            else
            {
                node* aux = first1;
                while (aux->next != NULL) {
                    aux = aux->next;
                }
                aux->next = added_aux;
            }
        }
        else {
            if (first2 == NULL)
            {
                first2 = added_aux;
            }
            else
            {
                node* aux = first2;
                while (aux->next != NULL) {
                    aux = aux->next;
                }
                aux->next = added_aux;
            }
        }
        search_aux = search_aux->next;

    }
}

