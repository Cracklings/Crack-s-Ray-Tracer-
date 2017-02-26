#pragma once
#include <glm/glm.hpp>

class Mesh
{
public:
	Mesh();
	Mesh(glm::vec3 position, glm::float64_t radius);
	~Mesh();

	glm::vec3 Position() const;
	glm::float64_t Radius() const;
	
private:
	glm::vec3 _position;
	glm::float64_t _radius;
};

