//==============================================================
// stdafx.h			기본적으로 사용하는 헤더 모음
//==============================================================
#pragma once

#include<iostream>
//#include<gl/glew.h>
#include "gl/glew.h"
//#include<gl/freeglut.h>
#include "gl/freeglut.h"
//#include<gl/freeglut_ext.h>
#include "gl/freeglut_ext.h"
//#include<gl/glm/glm.hpp>
#include "gl/glm/glm.hpp"
//#include<gl/glm/ext.hpp>
#include "gl/glm/ext.hpp"
//#include<gl/glm/gtc/matrix_transform.hpp>
#include "gl/glm/gtc/matrix_transform.hpp"
#include<sstream>
#include<fstream>
#include<string>
#include <vector>
#include <random>

#include "ENUM.h"
#include "fmod.hpp"
#include "fmod_errors.h"
//#include "stb_image.h"

#define MAX_ALIVE 14
#define MAX_ZOMBIE 140

#pragma comment(lib, "fmod_vc.lib")
#pragma comment(lib, "freeglut.lib")
#pragma comment(lib, "glew32.lib")