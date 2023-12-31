#include "moving_platform.h"

moving_platform::moving_platform(sf::Vector2f speed, sf::Vector2f size, sf::Vector2f position) : platform(size , position)
{
	platform_speed = speed; 
	//setFillColor(sf::Color::Blue);
	setOutlineColor(sf::Color::Blue);
}

void moving_platform::update()
{
	//std::cout << "jestem pokrewny" << std::endl;
	move_p();
}

sf::Vector2f moving_platform::return_speed()
{ 
	return platform_speed; 
}



void moving_platform::move_p()
{
	if (getGlobalBounds().left <= 0)
	{
		platform_speed.x = -platform_speed.x;
	}
	if (getGlobalBounds().left + getGlobalBounds().width >= 800)
	{
		platform_speed.x = -platform_speed.x;
	}
	move(platform_speed); 
}
