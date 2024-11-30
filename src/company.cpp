#include "../include/company.hpp"      
#include <iostream>
using namespace std;

namespace Enterprise
{
    Company::Company() {}       
    
    Company::~Company()
    {
        for (Branch* branch : branches)       
        {
            delete branch;          
        }
    
    }

    void Company::addBranch(Branch* branch)    
    {
        branches.push_back(branch);        

    }

    void Company::listSellersByBranch()
    {
        int branchNum = 1;      
        for (Branch* branch : branches)     
        {
            cout << "Sucursal " << branchNum << ": \n";   
            branch->listSeller();                
            branchNum++;             
        }
        
    }
}
