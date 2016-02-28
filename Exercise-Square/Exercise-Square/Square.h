#ifndef SQUARE_H
#define SQUARE_H
class Square
{
private:
	float height, width;
public:
	Square();
	~Square();
	void getHeight() const;
	void getWidth() const;
	void setData(float, float);
	void area() const;
	void perimeter() const;
};
#endif