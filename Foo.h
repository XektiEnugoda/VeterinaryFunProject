// Online C++ compiler to run C++ program online
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
    
    void setName(std::string newName) { newName = Name; };
    void setAge(int newAge) { newAge = Age; };
    void setFurColour(char newFC) { newFC = FurColour; };
    void setEC(char newEC) { newEC = EyeColour; };
};
void out(std::string );

template <typename T> void Foo<T>::Register()
{
    T reg;
std::cout << "Would you like to register your bunny to our vet(Y/N)? \n";
std::cin >> reg;
}



void out(std::string string)
{
   std::cout << string << "\n";
   return;
}
