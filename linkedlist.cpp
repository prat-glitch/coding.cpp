#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int coefficient;
    int exponent;
    Node* next;
};

// Function to add two polynomials
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    Node** current = &result;

    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            *current = new Node();
            (*current)->coefficient = poly1->coefficient;
            (*current)->exponent = poly1->exponent;
            (*current)->next = NULL;
            current = &((*current)->next);
            poly1 = poly1->next;
        } else if (poly1->exponent < poly2->exponent) {
            *current = new Node();
            (*current)->coefficient = poly2->coefficient;
            (*current)->exponent = poly2->exponent;
            (*current)->next = NULL;
            current = &((*current)->next);
            poly2 = poly2->next;
        } else {
            int coefficient = poly1->coefficient + poly2->coefficient;
            if (coefficient != 0) {
                *current = new Node();
                (*current)->coefficient = coefficient;
                (*current)->exponent = poly1->exponent;
                (*current)->next = NULL;
                current = &((*current)->next);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    // Add remaining terms from poly1
    while (poly1 != NULL) {
        *current = new Node();
        (*current)->coefficient = poly1->coefficient;
        (*current)->exponent = poly1->exponent;
        (*current)->next = NULL;
        current = &((*current)->next);
        poly1 = poly1->next;
    }

    // Add remaining terms from poly2
    while (poly2 != NULL) {
        *current = new Node();
        (*current)->coefficient = poly2->coefficient;
        (*current)->exponent = poly2->exponent;
        (*current)->next = NULL;
        current = &((*current)->next);
        poly2 = poly2->next;
    }

    return result;
}

// Function to print a polynomial
void printPolynomial(Node* poly) {
    while (poly != NULL) {
        cout << poly->coefficient << "x^" << poly->exponent;
        if (poly->next != NULL) {
            cout << " + ";
        }
        poly = poly->next;
    }
    cout << endl;
}

int main() {
    // Create two polynomials
    Node* poly1 = new Node();
    poly1->coefficient = 2;
    poly1->exponent = 2;
    poly1->next = new Node();
    poly1->next->coefficient = 3;
    poly1->next->exponent = 1;
    poly1->next->next = new Node();
    poly1->next->next->coefficient = 1;
    poly1->next->next->exponent = 0;
    poly1->next->next->next = NULL;

    Node* poly2 = new Node();
    poly2->coefficient = 4;
    poly2->exponent = 2;
    poly2->next = new Node();
    poly2->next->coefficient = 2;
    poly2->next->exponent = 1;
    poly2->next->next = new Node();
    poly2->next->next->coefficient = 3;
    poly2->next->next->exponent = 0;
    poly2->next->next->next = NULL;

    // Print the polynomials
    cout << "Polynomial 1: ";
    printPolynomial(poly1);
    cout << "Polynomial 2: ";
    printPolynomial(poly2);

    // Add the polynomials
    Node* result = addPolynomials(poly1, poly2);

    // Print the result
    cout << "Result: ";
    printPolynomial(result);

    return 0;
}