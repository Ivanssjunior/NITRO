#include<iostream>
using namespace std;

    int main() {

    // 1 - Array specifying the size
        // Here we inicialized the array with a 300 elements, as we know starting from 0 to 299, 
        // but this array doenst have any value declared.
            int vet[300];
            cout << vet[3] << endl; 

    // 2 - Stardant Values
        // On this example we have a array with a 5 elements but when the {} are empty it means the values are 0. 
            int vet2[5] = {};
            cout << vet2[1] << endl; // If we print any element from this array it will return a 0 value. 

    // 3 - Specifying the size and inicializing elements
        // Array declaration by specifying the size and inicializint elements
            int vet3[5] = {2022, 2023, 2024, 2025, 2026};

        // Compiler creates an array of size 5 elements
        // All the 5 elements are specified by the user. 

    // 4 - Inicialized by elements without declaring the size
            int vet4 = {15, 14, 16, 17, 33};

        // The compiler will specify the size of your arrays based on the elements 
        // specified by the user. 

    // 5 - Universal
            int vet5[] {14, 21, 28};
        // 

    return 0; 
}