#include "Board.hpp"
#include "City.hpp"
#include <fstream>
using namespace std;
using namespace pandemic;

namespace pandemic{

    Board::Board(){
        City_Cubes[City::Kinshasa]=0;
        City_Cubes[City::MexicoCity]=0;
        City_Cubes[City::HoChiMinhCity]=0;
        City_Cubes[City::Chicago]=0;
        City_Cubes[City::Bogota]=0;
        City_Cubes[City::Atlanta]=0;
        City_Cubes[City::Essen]=0;
        
    }

    int& Board::operator[](const City& CityId){
        if(City_Cubes.find(CityId)==City_Cubes.end()){
            throw "This City isnt in options";
        }
        
        return City_Cubes.at(CityId);
        
    }
    ostream& operator<<(ostream& Output, const Board& board){
        return Output;
    }

    bool Board::is_clean(){
        return true;
    }

    void Board::remove_cures(){}
  
    
}  
