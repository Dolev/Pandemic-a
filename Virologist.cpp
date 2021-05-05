#include "Virologist.hpp"
#include <typeinfo>

namespace pandemic{
    Virologist::Virologist(const Board &board, const City& CityId): Player(board, CityId){
    }

    string Virologist::role() {
        string name = typeid(Virologist).name();
        return name;
    }

    Player& Virologist::treat(const City& city) {
        return *this;
    }
}