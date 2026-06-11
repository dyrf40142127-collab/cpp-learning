#include<iostream>
class Player
{
public:
	int x, y;
	int speed;
	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};
int main()
{
	Player player;//前面为类，后面为实例后的对象
	player.x = 5;//通过.来对类中的变量进行访问
	player.y = 4;
	player.speed = 3;
	player.Move(1, -1);
	std::cout << player.x <<" "<< player.y << std::endl;
	return 0;



}
