#include "Player.hpp"
namespace pandemic{
    class Virologist : public Player{
    public:
        string role();
        Virologist(const Board& board, const City& CityId);
        Player& treat(const City& CityId);
    };
}