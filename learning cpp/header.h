class Point{
    int x, y;
public:
    Point();
    Point(int temp1, int temp2);
    void display();
    Point operator+(Point temp);
    Point operator-(Point temp);
};
