// Online C++ compiler to run C++ program online
#include <iomanip>
#include <iostream>

template<typename T> class Foo
{
    private:
    std::string Name;
    int Age;
    char FurColour;
    char EyeColour;
    
    public:
    
    void Register();
    void VetRegistry();
    
    std::string const getName() { return Name; };
    int getAge() const { return Age; };
    char getFurColour() { return FurColour; };
    char getEyeColour() { return EyeColour; };
    
    void setName(std::string newName) { Name = newName; };
    void setAge(int newAge) { Age = newAge; };
    void setFurColour(char newFC) { FurColour = newFC; };
    void setEC(char newEC) { EyeColour = newEC; };
};
void out(std::string );

template <typename T> void Foo<T>::Register()
{
    T reg;
std::cout << "Would you like to register your bunny to our vet(Y/N)? \n";
std::cin >> reg;
if (reg == 'Y')
{
   
    std::cin >> Name;
    std::cin >> Age;
    std::cin >> FurColour;
    std::cin >> EyeColour;

}
else
{
    std::cout << "Have a nice day!\n";
}
}

template <typename T> void Foo<T>::VetRegistry()
{
    this->Name = Name;
    getName();
}



void out(std::string string)
{
   std::cout << string << "\n";
   return;
}
