
#pragma once
#include <string>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "vector"

using namespace std;

namespace pandemic{

    class Player{
        Board MyBoard;
        City CurrCity;
        protected:
        vector<City> cards;
        
        public:
        Player(const Board& board, const City& CityId);
        ~Player(){};
        virtual Player& drive(const City& CityId);
        virtual Player& fly_direct(const City& CityId);
        virtual Player& fly_charter(const City& CityId);
        virtual Player& fly_shuttle(const City& CityId);
        virtual Player& build();               
        virtual Player& discover_cure(const Color& color);
        virtual Player& treat(const City& CityId);
        Player& take_card (const City& CityId);
        virtual std::string role () = 0;
    };
}