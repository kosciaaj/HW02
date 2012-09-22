
using namespace ci;
using namespace ci::app;
using namespace std;

class Circle{
public:
	Circle(int depth, ci::Vec2f position, float radius);

	Circle* next_;
	ci::Vec2f position_;
	float radius_;
	void insertAfter(Circle* new_item, Circle* insert_here);
	bool isInside(float x, float y);
	void draw(ci::Vec2i mouse_pos);
	void update(ci::Vec2f position, float r);

};

//-void insertAfter(Circle* new_item, Circle* insert_here);