class ExprTreeNode {
public:
    // Constructor for operand node
    ExprTreeNode(double val); 

    // Constructor for operator node
    ExprTreeNode(char op, ExprTreeNode* left, ExprTreeNode* right); 

    // Member variables
    bool is_operand; // True if operand, false if operator
    double value;    // Stores value if is_operand is true
    char operation;  // Stores operator if is_operand is false
    ExprTreeNode* left;
    ExprTreeNode* right;

    // Methods for evaluation, printing, etc.
    double evaluate(); 
    void print_inorder();
};