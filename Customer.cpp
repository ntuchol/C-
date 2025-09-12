#include <string> 

class Customer {
private:
    std::string firstName;
    std::string lastName;
    std::string address;
    int customerID;
    bool isOnMailingList;

public:
     Customer(std::string fName, std::string lName, std::string addr, int id, bool mailing) {
        firstName = fName;
        lastName = lName;
        address = addr;
        customerID = id;
        isOnMailingList = mailing;
    }

     std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getAddress() const { return address; }
    int getCustomerID() const { return customerID; }
    bool getIsOnMailingList() const { return isOnMailingList; }

    void setAddress(std::string newAddress) { address = newAddress; }
    void setMailingList(bool status) { isOnMailingList = status; }
};
