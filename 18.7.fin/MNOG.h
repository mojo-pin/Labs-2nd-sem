class Vector
{
public:
	Vector(int s);
	int give(int index);
	int givesize();
	void cross();
	void end();
private:
	int size;
	int* data;
	int* data1;
};
