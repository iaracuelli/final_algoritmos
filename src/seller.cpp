#include "../include/seller.hpp"      
#include <iostream>
using namespace std;

namespace Enterprise
{
    
    Seller::Seller(const string& name, double salary)
        : name (name), salary(salary) {}

    Seller::~Seller() {}

    void Seller::showInfo() const
    {
        cout << "Nombre: " << name << endl;
        cout << "Salario: " << salary << endl; 
    }

   
    Personal::Personal(const string& name, double salary)            
        : Seller(name, salary) {}

    void Personal::work() const 
    {
        cout << "Tarea: Atender pedidos a clientes particulares." << endl;
    }

    void Personal::showInfo() const
    {
        Seller::showInfo();            
        cout << "Categoria: Particular" << endl;
    }

    
    Professional::Professional(const string& name, double salary)
        : Seller(name, salary) {}

    void Professional::work() const 
    {
        cout << "Tarea: Atender pedidos de clientes profesionales." << endl;
    }

    void Professional::showInfo() const
    {
        Seller::showInfo();
        cout << "Categoria: Profesional" << endl;
    }

    
    Business::Business(const string& name, double salary)
        : Seller(name, salary) {}

    void Business::work() const
    {
        cout << "Tarea: Atender pedidos de clientes Empresa." << endl;
    }

    void Business::showInfo() const
    {
        Seller::showInfo();
        cout << "Categoria: Empresa" << endl;
    }

}