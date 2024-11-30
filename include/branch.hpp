#ifndef BRANCH_H            
#define BRANCH_H

#include <list>
#include "seller.hpp"

namespace Enterprise
{
    class Branch
    {
        private:
            
            list<Seller*> sellers;

        public:
            Branch();     
            ~Branch();       

            void addSeller(Seller* Seller);
            void listSeller();

    };  
}

#endif