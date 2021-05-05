#include "Dispatcher.hpp"
#include <typeinfo>

namespace pandemic{
    //Dispatcher constuctor 
    Dispatcher::Dispatcher(const Board& board, const City& CityId):Player(board, CityId){

    }
    
    string Dispatcher::role(){
       string name = typeid(Dispatcher).name();
       return name;
    }

    Player& Dispatcher::fly_direct(const City& CityId){
        return *this;
    }

}   