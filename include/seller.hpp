#ifndef SELLER_H
#define SELLER_H

#include <iostream>
#include <string>
using namespace std;

namespace Enterprise
{
    class Seller          
    {
        private:
        
            string name;
            double salary;

        public:
            Seller(const string& name, double salary);       
            virtual ~Seller();                 

            virtual void work() const = 0;     
            virtual void showInfo() const = 0; 
            double getSalary() const { return salary; }   

    };

    class Personal : public Seller        
    {
        public:

            Personal(const string& name, double salary);       
            void work() const override;         
            void showInfo() const override;     
    };

    class Professional : public Seller         
    {
        public:

            Professional(const string& name, double salary);
            void work() const override;
            void showInfo() const override;

    };

    class Business : public Seller         
    {
        public:

            Business(const string& name, double salary);
            void work() const override;
            void showInfo() const override;

    };   
}

#endif