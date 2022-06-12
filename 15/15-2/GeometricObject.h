#ifndef GeometricObject_h
#define GeometricObject_h
#include <string>
using namespace std;
class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(string);
	void setColor(string);
	virtual string getColor() const;

private:
	string color;
};




#endif
