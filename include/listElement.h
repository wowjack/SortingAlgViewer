#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h"

class listElement {
public:
	listElement(const int=0, const int=0);
	listElement(const listElement&);
	~listElement();

	//Getters & Setters
	void setPos(const double x, const double y);
	void setValue(const int val);
	int getValue() const;
	void setIndex(const int index);
	int getIndex() const;
	void setColor(const sf::Color);
	//Rendering
	void draw(sf::RenderWindow& window);
	//Operator Overloads
	bool operator<(const listElement e) const;
	bool operator>(const listElement e) const;
	void operator=(const listElement& e);
	bool operator<=(const listElement& e)const;
	//List mutation in sorting
	void swap(listElement& e);

private:
	int m_value, m_index;
	sf::RectangleShape m_rect;

	//Helper methods
	inline int indexToXPos(int index);
	inline int valToYPos(int val);
};