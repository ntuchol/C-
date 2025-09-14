#include <string>

class Invoice {
public:
    Invoice(std::string pNum, std::string pDesc, int qty, double price);

    void setPartNumber(std::string pNum);
    void setPartDescription(std::string pDesc);
    void setQuantity(int qty);
    void setPricePerItem(double price);

    std::string getPartNumber() const;
    std::string getPartDescription() const;
    int getQuantity() const;
    double getPricePerItem() const;

    double getInvoiceAmount() const;

private:
    std::string partNumber;
    std::string partDescription;
    int quantity;
    double pricePerItem;
};
