class Tree {
private:
    int height;
    char znak;
    string color;

    int** tab;


    int x, y;

  

public:
    void printTree();
    Tree(int h, char z, string c);

    ~Tree();

static int counter;

    friend class Forest;
};