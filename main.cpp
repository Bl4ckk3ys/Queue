#include "Patient.h"



int main(){
    Patient* patients = new Patient[10];
    int count = 0;
    while (count < 10)
    {
        std::cin: name, surname, patronymic;
        std::cin:born_date;
        // Положить в массив
        count++;
    }
    
    PatientQueue patientQueue, Doctor doc;
    while(true){
        //Ввод пациентов
        //Желательно предусмотреть ввод пациентов через файл
    }
    while (true){//???
        Patient* current = patientQueue.GetNextPatient();
        doc.Next(current);
        delete current;
    }
    
    return 0;
}