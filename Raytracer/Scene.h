#pragma once
#include <vector>
#include "Mesh.h"
#include "../Raytracer/Ray.h"

class Scene
{
public:
	Scene();
	~Scene();

	struct SceneDesc
	{
		std::string OutputLocation;
	};

	void RenderScene(const SceneDesc&) const;

private:
	std::vector<Mesh> _meshes;
	std::vector<Ray> _rays;

	glm::mat4x4 _modelViewMatrix;

};

