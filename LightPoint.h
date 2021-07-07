#pragma once
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
class LightPoint
{
public:
	LightPoint(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color =glm::vec3(1.0f,1.0f,1.0f));

	glm::vec3 position;
	glm::vec3 angles;
	glm::vec3 direction = glm::vec3(1.0f, 1.0f, 1.0f);
	glm::vec3 color;

	float constant=1.0f;
	float linear=0.3f;
	float quadratic = 0.001f;
};

#include "LightPoint.h"

LightPoint::LightPoint(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color):
	position(_position),
	angles(_angles),
	color(_color)
{
	constant = 1.0f;
	linear = 0.09f;
	quadratic = 0.032f;
}
