// Example of a simplified Doctor class
class Doctor {
public:
    int doctorID;
    std::string name;
    std::string specialization;
    // Add methods for managing availability

    Doctor(int id, const std::string& n, const std::string& spec)
        : doctorID(id), name(n), specialization(spec) {}
};

// Example of a simplified Appointment class
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

// Main logic would reside in a ScheduleManager class or similar