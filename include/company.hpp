#ifndef COMPANY_H           
#define COMPANY_H

#include <list>
#include "branch.hpp"

namespace Enterprise
{
    class Company
    {
        private:
            
            list<Branch*> branches; 
        
        public:
        
            Company();      
            ~Company();    

            void addBranch(Branch* branch);     
            void listSellersByBranch();
    };
}

#endif