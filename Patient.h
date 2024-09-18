#include <iostream>
#include <string>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

class Patient{
private:    
    string _Name;
    std::string _Surname;
    std::string _Patronymic;
    std::chrono::year_month_day _born_date;
    UUID _uuid;
    Gender _gender;
    void DefineGender();
    void GenerateID();
    void DetermineFIO(string FIO);
    enum Estate{1,2,3};
public:
    Patient(string surname, string name, string patronymic, std::chrono::year_month_day born_date);
    Patient(string FIO, std::std::chrono::year_month_day born_date);
    

};