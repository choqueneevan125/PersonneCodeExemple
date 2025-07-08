#include "Personne.h"

Personne::Personne(const std::string& nom, const std::string Power, int age) : nom(nom), Power(Power), age(age) {}

void Personne::Presentation() const
{
    std::cout << "Votre héro s'appelle " << nom << " qui a comme pouvoir " << Power << " et il a " << age << " ans\n";
}

std::string Personne::getNom() const
{
    return nom;
}