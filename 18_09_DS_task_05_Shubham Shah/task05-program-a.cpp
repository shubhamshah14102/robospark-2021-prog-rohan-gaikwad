#include <iostream>
using namespace std;
class Rectangle
{
	public:
		int length;
		int breadth;
		
    Rectangle(){
    length=0;
    breadth=0;
	}
	Rectangle(int l,int b)
{
	length = l;
    breadth = b;
	}
	Rectangle(int n){
    length=n;
    breadth=n;
};

int getArea()
{
  return length * breadth;
}
};

int main()
{
    Rectangle rec;    
	int area = rec.getArea();
	cout << "Area : " << area << endl;
	Rectangle rec1(19,25);   
	int area1 = rec1.getArea();
	cout << "Area : " << area1 << endl;
	Rectangle rec2(19);
    int area2 = rec2.getArea();
	cout << "Area : " << area2 << endl;   
	return 0;
}
