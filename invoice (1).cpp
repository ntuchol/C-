#include <string>

class Invoice {
public:
    // Constructor
    Invoice(std::string pNum, std::string pDesc, int qty, double price);

    // Mutator functions with validation
    void setPartNumber(std::string pNum);
    void setPartDescription(std::string pDesc);
    void setQuantity(int qty);
    void setPricePerItem(double price);

    // Accessor functions
    std::string getPartNumber() const;
    std::string getPartDescription() const;
    int getQuantity() const;
    double getPricePerItem() const;

    // Calculate invoice amount
    double getInvoiceAmount() const;

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    double pricePerItem;
};