class PatientQueue{
private:
    Patient** _top_patient;
    Patient** _mid_patient;
    Patient** _general_patient;

public:
    PatientQueue();
    
    Patient* GetNextPatient();
    void AppendPatient(Patient* pat);
    ~PatientQueue();
};

