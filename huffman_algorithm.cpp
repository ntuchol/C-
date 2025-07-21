struct MinHeapNode {
        char data; // Input character
        int freq;  // Frequency of the character
        MinHeapNode *left, *right; // Left and right child

        MinHeapNode(char data, int freq) {
            left = right = nullptr;
            this->data = data;
            this->freq = freq;
        }
    };

    // Custom comparator for the priority queue
    struct compare {
        bool operator()(MinHeapNode* l, MinHeapNode* r) {
            return (l->freq > r->freq);
        }
    };