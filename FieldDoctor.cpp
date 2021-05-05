#include "FieldDoctor.hpp"
#include "Player.hpp"
#include "string"
#include <typeinfo>
using namespace std;
using namespace pandemic;

namespace pandemic{

    FieldDoctor::FieldDoctor(const Board& board, const City& CityId):Player(board, CityId){}

    string FieldDoctor::role(){
       string name = typeid(FieldDoctor).name();
       return name;
    }
   
    Player& FieldDoctor::treat(const City& CityId){
        return *this;
    }

}    