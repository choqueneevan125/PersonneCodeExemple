#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

class Personne
{
private:
    std::string nom;
    std::string Power;
    int age;

public:
    Personne(const std::string& nom, const std::string Power, int age);
    void Presentation() const;
    std::string getNom() const;
    
};

#endif