#pragma once
#pragma once
#include "City.hpp"
#include <map>
#include <stdio.h>
using namespace std;

namespace pandemic{
    class Board{
       
        public:
            map<City, int> City_Cubes;
            Board();
            int& operator[](const City& city);
            friend ostream& operator<<(ostream& Output, const Board& board);
            static bool is_clean();
            void remove_cures();
    };
}  
