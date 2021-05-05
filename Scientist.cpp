#include "Scientist.hpp"

#include "string"
#include <typeinfo>

using namespace std;

namespace pandemic
{
    Scientist::Scientist(const Board& board, const City& CityId, const int Num): Player(board, CityId){
        this->Num_of_cards= Num;
    }

    string Scientist::role() {
        string name = typeid(Scientist).name();
        return name;
    }

    Player& Scientist::discover_cure(const Color& color) {
        return *this;
    }
}

 