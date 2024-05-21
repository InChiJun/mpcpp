class Circle
{
    public:
        Circle();
        ~Circle();
        Circle(int r);
        int getRadius();
        double getArea();
    private:
        int radius = 0;
    protected:
        void setRadius(int r);
};

class Ecllipse : public Circle{
    private:
        int width = 0;
    public:
        Ecllipse(int r, int w){
            setRadius(r);
            setWidth(w);
        };
        double getArea(){
            return 3.14 * getRadius() * getRadius();
        };
        void setWidth(int w){
            width = w;
        }
}