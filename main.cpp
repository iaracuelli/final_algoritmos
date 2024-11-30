#include "include/company.hpp" 
#include "include/branch.hpp"     
#include "include/seller.hpp"     
using namespace std;
using namespace Enterprise;

int main()
{
    Company company;        

    Seller* personal1 = new Personal("German", 4000.0);
    Seller* personal2 = new Personal("Lucas", 4000.0);
    Seller* professional1 = new Professional("Sofia", 6000.0);
    Seller* professional2 = new Professional("Denis", 6000.0);
    Seller* business1 = new Business("Silvia", 7000.0);
    Seller* business2 = new Business("Alfredo", 7000.0);
    
    Branch* branch1 = new Branch();
    Branch* branch2 = new Branch();

    branch1->addSeller(personal1);
    branch1->addSeller(professional1);
    branch1->addSeller(business1);

    branch2->addSeller(personal2);
    branch2->addSeller(professional2);
    branch2->addSeller(business2);
    
    company.addBranch(branch1);
    company.addBranch(branch2);
    
    company.listSellersByBranch();

    delete personal1;
    delete personal2;
    delete professional1;
    delete professional2;
    delete business1;
    delete business2;
    delete branch1;
    delete branch2;

    return 0;

}