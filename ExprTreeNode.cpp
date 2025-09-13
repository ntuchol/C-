class ExprTreeNode {
public:
    ExprTreeNode(double val); 

    ExprTreeNode(char op, ExprTreeNode* left, ExprTreeNode* right); 

    bool is_operand; 
    double value;    
    char operation;  
    ExprTreeNode* left;
    ExprTreeNode* right;

    double evaluate(); 
    void print_inorder();
};
