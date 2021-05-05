#include "Researcher.hpp"


namespace pandemic{
    /*void ()
    */
    Researcher:: Researcher(const Board& board, const City& CityId):Player(board, CityId){}

    string Researcher::role(){
        string name = typeid(Researcher).name();
        return name;
    }
    Player& Researcher::discover_cure(const Color& color){
        return *this;
    }
}