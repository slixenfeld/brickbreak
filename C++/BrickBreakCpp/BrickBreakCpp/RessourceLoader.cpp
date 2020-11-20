#include "RessourceLoader.h"

RessourceLoader::RessourceLoader()
{
	std::cout << "Ressource Loader init\n";
}

void RessourceLoader::load()
{
	std::cout << "<Ressource Loader> Loading Files..\n";
	BRICK_1_G1_tex.loadFromFile("./png/brick01g1.png");
	BRICK_1_B1_tex.loadFromFile("./png/brick01b1.png");
	BRICK_1_GR1_tex.loadFromFile("./png/brick01b1.png");
	BRICK_1_O1_tex.loadFromFile("./png/brick01o1.png");
	BRICK_1_R1_tex.loadFromFile("./png/brick01r1.png");
	BRICK_1_V1_tex.loadFromFile("./png/brick01v1.png");
	BRICK_1_Y1_tex.loadFromFile("./png/brick01y1.png");
	std::cout << "<Ressource Loader> All Files Loaded!\n";
}