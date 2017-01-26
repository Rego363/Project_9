#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <fstream>
#include <sstream>
#include <Vector3.h>
#include <Matrix3.h>

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	std::ifstream vertexInput;
	std::stringstream vss;
	std::string vsLine;
	std::ifstream fragInput;
	std::stringstream ss;
	std::string line;
	Clock clock;
	Time elapsed;

	float rotationAngle = 0.01f;
};

#endif