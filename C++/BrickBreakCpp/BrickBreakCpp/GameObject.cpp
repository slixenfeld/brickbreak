#include "GameObject.h"
GameObject::GameObject()
{

}

void GameObject::setTexture(sf::Texture texture)
{
	sprite.setTexture(texture);
}