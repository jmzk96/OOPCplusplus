#include <iostream>
using std::string;


class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
    
public:
    
    
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout<<"Name : "<< Name << std::endl;
        std::cout<<"Company : "<< Company << std::endl;
        std::cout<<"Age : "<< Age << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age=age;
    }
    void AskForPromotion(){
        if (Age>30)
            std::cout<<Name<<" got promoted" << std::endl;
        else
            std::cout<<Name<<", sorry no promotion for you"<< std::endl;
    }

};

class Developer: Employee{
private:
    string FavProgrammingLang;
public:
    string getLanguage(){
        return FavProgrammingLang;
    }
    void setLanguge(int language){
        FavProgrammingLang = language;
    }
    Developer(string name, string company, int age, string language):Employee(name,company,age){
        
        FavProgrammingLang = language;
    }
    void IntroduceYourself(){
        std::cout<<"My Fav Programming language is "<< FavProgrammingLang<< std::endl;
    }
};

int main()
{
    int number;
    Employee employee1 = Employee("Saldnia","YT-Copudeb",45);

    employee1.IntroduceYourself();
    employee1.setAge(29);
    std::cout<<employee1.getName()<< " is "<<employee1.getAge()<< " years old"<<std::endl;
    employee1.AskForPromotion();

    Developer dev =Developer("Saldnia","YT-dqwdwd",45,"Java");
    std::cout<<employee1.getName()<< " works at "<<employee1.getCompany()<<std::endl;
    dev.IntroduceYourself();
}