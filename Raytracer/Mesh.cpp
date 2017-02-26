#include "Mesh.h"



Mesh::Mesh()
	: _position(0, 0, 0)
	, _radius(0)
{
}

Mesh::Mesh(glm::vec3 position, glm::float64_t radius)
	: _position(position)
	, _radius(radius)
{
}

Mesh::~Mesh()
{
}

glm::vec3 Mesh::Position() const
{
	return _position;
}

glm::float64_t Mesh::Radius() const
{
	return _radius;
}

