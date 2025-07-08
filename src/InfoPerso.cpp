#include "InfoPerso.h"

std::vector<Personne> CreateInfoPerso()
{
    Personne Evan("Evan", "Lance cailloux", 17);
    Personne SuperMan("Super Man", "voler", 23);
    Personne SonGoku("Son Goku", "kameamea", 30);

    return {Evan, SuperMan, SonGoku};
}