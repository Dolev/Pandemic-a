#include "GeneSplicer.hpp"
#include "string"
#include <typeinfo>
using namespace std;

namespace pandemic{
    /*void ()
    */
    GeneSplicer:: GeneSplicer(const Board& board, const City& CityId):Player(board, CityId){}

    string GeneSplicer::role(){
        string name = typeid(GeneSplicer).name();
        return name;
    }
    Player& GeneSplicer::discover_cure(const Color& color){
        return *this;
    }
}