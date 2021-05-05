#include "OperationsExpert.hpp"

namespace pandemic{
    /*void ()
    */
    OperationsExpert:: OperationsExpert(const Board& board, const City& CityId):Player(board, CityId){}

    string OperationsExpert::role(){
        string name = typeid(OperationsExpert).name();
        return name;
    }
    Player& OperationsExpert::discover_cure(const Color& color){
        return *this;
    }
}