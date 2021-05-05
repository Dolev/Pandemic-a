#include <string>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic
{
    Player::Player(const Board& board, const City& CityId){
        this->MyBoard = board;
        this->CurrCity = CityId;
    }

    Player &Player::drive(const City& CityId)
    {
        return *this;
    }
    Player &Player::fly_direct(const City &CityId)
    {
        return *this;
    }
    Player &Player::fly_charter(const City &CityId)
    {
        return *this;
    }
    Player &Player::fly_shuttle(const City& CityId)
    {
        return *this;
    }
    Player &Player::build()
    {
        return *this;
    }
    Player &Player::discover_cure(const Color &color)
    {
        return *this;
    }
    Player &Player::treat(const City& CityId)
    {
        return *this;
    }
    Player &Player::take_card(const City& CityId)
    {
        return *this;
    }

}