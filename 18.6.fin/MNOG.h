class Vector
{
public:
	Vector(int s);
	int give(int index);
	int givesize();
	void cross();
	void end();
	void pred(int i);
private:
	int size;
	int* data;
};
