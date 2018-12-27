//Jonas Moros
class Set{
    private: 
    //private data members
        int* info;
        int size;
    public:
    //public data members 
        Set();
        void addItem(int);
        bool contains(int);
        bool isEmpty();
        void remove(int);
        bool equals(Set&);
        Set getIntersection(Set&);
        Set getUnion(Set& s2);
        int getSize();
        int getItem(int i);
};