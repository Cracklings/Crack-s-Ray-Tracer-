#pragma once
#include <glm/glm.hpp>
#include "../Image_IO_Test/Mesh.h"


class Ray
{
public:
	Ray();
	Ray(const glm::vec3& origin, const glm::vec3& direction);
	~Ray();

	
	glm::vec3 Origin() const;
	glm::vec3 Direction() const;

	bool intersects(const Mesh&);
private:
	glm::vec3 _origin;
	glm::vec3 _direction;
	
};
