#include "Medic.hpp"
#include "string"
#include <typeinfo>

using namespace std;


namespace pandemic
{
    Medic::Medic(const Board &board, const City& CityId): Player(board, CityId){

        
    }

    string Medic::role() {
        string name = typeid(Medic).name();
        return name;
    }

    Player& Medic::treat(const City& city) {
        return *this;
    }
}