#include "Board.hpp"
#include "City.hpp"
#include <fstream>
#include <stdexcept>
#include <iostream>  

namespace pandemic{
    map<City, int> Board::City_Cubes;
    
    Board::Board(){
        City_Cubes[City::Kinshasa]=0;
        City_Cubes[City::MexicoCity]=0;
        City_Cubes[City::HoChiMinhCity]=0;
        City_Cubes[City::Chicago]=0;
    }

     int& Board::operator[](const City& CityId){
        if(City_Cubes.find(CityId)==City_Cubes.end()){
            throw "This City isn't in the board ";
        }
        return City_Cubes.at(CityId);//get the num in the map by key  CityId
    }
    ostream& operator<<(ostream& Output, const Board& board){
        return Output;
    }
    bool Board::is_clean(){
       //cout << " Initially, City_Cubes.empty(): " << City_Cubes.empty() << "\n";   //Should Be 48
       bool flag=false;
       if(City_Cubes.empty()){//empty map
            flag=true;
       }
       return flag;       
    }

     Board Board::remove_cures(){
          Board temp;
        return temp;
    }
}

/*
void print_map(std::unordered_map<K, V> const &m)
{
    for (auto it = m.cbegin(); it != m.cend(); ++it) {
        if(Num_of_Cubes[it]==0){//if all cubes clean
        }
    }
}
*/