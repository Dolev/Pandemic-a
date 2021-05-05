#include "Player.hpp"

namespace pandemic{
    class OperationsExpert : public Player{
        public:
        string role();
        OperationsExpert(const Board& board, const City& CityId);
        Player& discover_cure(const Color& color);
    };
}