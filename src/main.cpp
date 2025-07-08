#include <iostream>
#include <string>
#include "InfoPerso.h"

int main()
{
    std::vector<Personne> personnes = CreateInfoPerso();

    std::string nomRecherche;
    std::cout << "Entrez le nom de la personne à rechercher : ";
    std::getline(std::cin, nomRecherche);

    bool trouve = false;

    for (const auto p : personnes)
    {
        if (p.getNom() == nomRecherche)
        {
            p.Presentation();
            trouve = true;
            break;
        }
    }

    if (!trouve)
    {
        std::cout << "Aucune personne nommé '" << nomRecherche << "' n'a été trouvé.\n";
    }

    return 0;   
}