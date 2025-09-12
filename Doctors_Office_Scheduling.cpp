class Doctor {
public:
    int doctorID;
    std::string name;
    std::string specialization;

    Doctor(int id, const std::string& n, const std::string& spec)
        : doctorID(id), name(n), specialization(spec) {}
};

class Appointment {
public:
    int appointmentID;
    std::string date;
    std::string time;
    int doctorID;
    int patientID;

    Appointment(int appID, const std::string& d, const std::string& t, int docID, int patID)
        : appointmentID(appID), date(d), time(t), doctorID(docID), patientID(patID) {}
};

