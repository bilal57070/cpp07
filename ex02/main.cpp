#include "Array.hpp"
#include "Array.tpp"
#include <string>


#include <iostream>
#include "Array.hpp" // Assurez-vous que votre classe Array est dans ce fichier.

int main() {
    try {
        // Test 1: Construction sans paramètre (tableau vide)
        std::cout << "Test 1: Construction d'un tableau vide\n";
        Array<int> emptyArray;
        std::cout << "Taille du tableau: " << emptyArray.size() << "\n\n";

        // Test 2: Construction avec un paramètre (tableau de taille n)
        std::cout << "Test 2: Construction d'un tableau de taille 5\n";
        Array<int> intArray(5);
        std::cout << "Taille du tableau: " << intArray.size() << "\n";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "Element " << i << ": " << intArray[i] << "\n";
        }
        std::cout << "\n";

        // Test 3: Modification des éléments et accès par opérateur []
        std::cout << "Test 3: Modification des éléments\n";
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 10;
        }
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "Element " << i << ": " << intArray[i] << "\n";
        }
        std::cout << "\n";

        // Test 4: Gestion des exceptions pour un index hors limites
        std::cout << "Test 4: Accès hors limites\n";
        try {
            std::cout << intArray[10] << "\n";
        } catch (const std::exception &e) {
            std::cerr << "Exception attrapée: " << e.what() << "\n";
        }
        std::cout << "\n";

        // Test 5: Construction par copie
        std::cout << "Test 5: Construction par copie\n";
        Array<int> copyArray(intArray);
        std::cout << "Copie réalisée. Modification de la copie.\n";
        copyArray[0] = 999;
        std::cout << "Original [0]: " << intArray[0] << "\n";
        std::cout << "Copie [0]: " << copyArray[0] << "\n\n";

        // Test 6: Opérateur d'affectation
        std::cout << "Test 6: Opérateur d'affectation\n";
        Array<int> assignArray;
        assignArray = intArray;
        std::cout << "Affectation réalisée. Modification de l'assigné.\n";
        assignArray[1] = 888;
        std::cout << "Original [1]: " << intArray[1] << "\n";
        std::cout << "Assigné [1]: " << assignArray[1] << "\n\n";

        // Test 7: Classe avec un autre type (std::string)
        std::cout << "Test 7: Tableau avec des chaînes de caractères\n";
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        stringArray[2] = "!";
        for (unsigned int i = 0; i < stringArray.size(); ++i) {
            std::cout << "Element " << i << ": " << stringArray[i] << "\n";
        }
        std::cout << "\n";

    } catch (const std::exception &e) {
        std::cerr << "Erreur inattendue: " << e.what() << "\n";
    }

    return 0;
}
