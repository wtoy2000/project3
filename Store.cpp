// CS1300 Spring 2020
// Author: Wesley Toy
// Recitation: 301 – Telly 
// Project 3 - Store Functions

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;
#include "Store.h"

Store s;

Store::Store()
{
    priceMultiplier = 1.00;
    bill = 0;

}

void Store::setTotal(double bill_)
{
    bill = bill + bill_;
}

double Store::getTotal()
{
   return bill; 
}

void Store::shop(Materials &materials1)
{
    cout<<"Shop here for materials. Please pick an option:"<<endl;
    int option;
    
    cout<<"1. Oxen"<<endl;
    cout<<"2. Food"<<endl;
    cout<<"3. Bullets"<<endl;
    cout<<"4. Wagon Parts"<<endl;
    cout<<"5. Medical Kits"<<endl;
    cout<<"6. Leave store"<<endl;
    
    cin>>option;
    
    
    while (option != 6)
    
    {
        double amount = 0;
        double total = 0;
        
        if (option == 1)
        {
            cout<<endl;
            cout<<"You must spend between $100 and $200 on oxen. There are two oxen per yoke. Yokes are $40."<<endl;
            cout<<"Please enter how many yokes you wish to purchase:"<<endl;
            cin>>amount;
            
            total = 40 * amount;
            
            while(amount < 3 || amount > 5)
            {
                
                if(total > materials1.getMoney())
                {
                    cout<<"Not enough money."<<endl;
                }
                
                else if(amount < 3 || amount > 5)
                {
                    cout<<"Must spend between $100 and $200 on oxen."<<endl;
                }
                
                cout<<"Enter new amount:"<<endl;
                cin>>amount;
                total = 40 * amount;
                
 
            }
            
            cout<<"Purchased "<<amount<<" yokes."<<endl;
            cout<<"You purchased "<<amount * 2<<" oxen."<<endl;
            cout<<endl;
            materials1.setOxen(2 * amount);
            materials1.setMoney(-(total));
            setTotal(total);
        }
        
        else if(option == 2)
        {
            cout<<endl;
            cout<<"Food is 50 cents a pound, we recommend having 200 pounds per person."<<endl;
            cout<<"Please enter how many pounds you wish to purchase:"<<endl;
            cin>>amount;
            
            while(amount + materials1.getFoodAmount() > 1000 || amount * .50 > materials1.getMoney())
            {
                if(amount * .50 > materials1.getMoney())
                {
                    cout<<"You do not have enough money."<<endl;
                }
                
                else if (amount + materials1.getFoodAmount() > 1000)
                {
                    cout<<"You cannot hold that much food. You can only hold 1000 pounds."<<endl;
                }
                
                cout<<"Enter a new amount:"<<endl;
                cin>>amount;
            }
            
            cout<<"You bought "<<amount<<" pounds of food."<<endl;
            cout<<endl;
            materials1.setFood(amount);
            materials1.setMoney(-(.50 * amount));
            setTotal(.50 * amount);
        }
        
        else if (option == 3)
        {
            cout<<endl;
            cout<<"A box of 20 bullets is $2."<<endl;
            cout<<"Please enter how many boxes you wish to purchase:"<<endl;
            cin>>amount;
            
            while(amount * 2 > materials1.getMoney())
            {
                cout<<"You do not have enough money. Please enter a new amount:"<<endl;
                cin>>amount;
            }
            
            cout<<"You have purchased "<<amount<<" boxes of bullets."<<endl;
            cout<<endl;
            materials1.setBullets(20 * amount);
            materials1.setMoney(-2 * amount);
            setTotal(2 * amount);
        }
        
        else if(option == 4)
        {
            cout<<endl;
            cout<<"Wagon parts include wheels, axles, and tongues. Parts are $20."<<endl;
            cout<<"Please enter how many wagon parts you wish to purchase:"<<endl;
            cin>>amount;
            
            while (amount * 20 > materials1.getMoney())
            {
                cout<<"You do not have enough money. Please enter a new amount:"<<endl;
                cin>>amount;
            }
            
            cout<<"You have purchased "<<amount<<" wagon parts"<<endl;
            cout<<endl;
            materials1.setWagonParts(amount);
            materials1.setMoney(-20 * amount);
            setTotal(20 * amount);
        }
        
        else if(option == 5)
        {
            cout<<endl;
            cout<<"Medical kits cost $25. Pleas enter how many you wish to purchase."<<endl;
            cin>>amount;
            
            while(amount * 25 > materials1.getMoney())
            {
                cout<<"You do not have enough money. Please enter a new amount:"<<endl;
                cin>>amount;
            }
            
            cout<<"You have purchased "<<amount<<" medical kits"<<endl;
            cout<<endl;
            materials1.setMedical(amount);
            materials1.setMoney(-25 * amount);
            setTotal(25 * amount);
            
        }
        
        else
        {
            cout<<endl;
            cout<<"Invalid option"<<endl;
            cout<<endl;
        }
        
        cout<<"Total bill: $"<<getTotal();
        cout<<endl;
        cout<<"You have $"<<materials1.getMoney()<<" in cash."<<endl;
        cout<<endl;
        
        cout<<"Shop here for materials. Please pick an option:"<<endl;
    
        cout<<"1. Oxen"<<endl;
        cout<<"2. Food"<<endl;
        cout<<"3. Bullets"<<endl;
        cout<<"4. Wagon Parts"<<endl;
        cout<<"5. Medical Kits"<<endl;
        cout<<"6. Leave store"<<endl;
        cout<<endl;
        
        cin>>option;
        
        

    }
    
    if(option == 6)
    {
        cout<<"Thanks for shopping!"<<endl;
    }
}



