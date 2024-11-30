#include "../include/branch.hpp"
#include <iostream>
using namespace std;

namespace Enterprise
{
    Branch::Branch() {}    

    
    Branch::~Branch()       
    {
        for (Seller* seller : sellers)
        {
            delete seller;        
        }
    
    }

    void Branch::addSeller(Seller* Seller)           
    {
        sellers.push_back(Seller);      
    }

    void Branch::listSeller()
    {
        int sellerNum = 1;           
        for (Seller* seller : sellers)
        {
            if (seller)
            {
                cout << "Notificacion para vendedor " << sellerNum << ":\n" ;
                seller->showInfo();      
                seller->work();          
                cout << endl;
                sellerNum++;              
            }
        }
        
    }

}