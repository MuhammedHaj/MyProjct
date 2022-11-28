#include <iostream>

using namespace std;

class Rectangle{
    public:
    int width, height;
    
    void set_height(int a){
        height=a;
    }
    
    void set_width(int b){
        width=b;
    }
    
    int get_height(){
        return height;
    }
    
    int get_width(){
        return width;
    }

    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea: public Rectangle{
    public:
    unsigned int c,d;
    RectangleArea(){
        cin>>c>>d;
    }
    void read_input(){
     set_width(c);
     set_height(d);
    }

   void display(){
       unsigned int area= width*height;
        cout<<area;
    }
};



int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}