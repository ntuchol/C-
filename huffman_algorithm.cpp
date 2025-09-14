struct MinHeapNode {
        char data; 
        int freq;  
        MinHeapNode *left, *right; 

        MinHeapNode(char data, int freq) {
            left = right = nullptr;
            this->data = data;
            this->freq = freq;
        }
    };

    struct compare {
        bool operator()(MinHeapNode* l, MinHeapNode* r) {
            return (l->freq > r->freq);
        }
    };
