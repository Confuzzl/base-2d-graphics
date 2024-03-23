module scene;

import object;
import polygon;
import circle;

Scene::Scene() {}
Scene::~Scene() = default;

import debug;

void Scene::init() {
  const auto &a = Object<Polygon>::New({.n = 3, .r = 0.5});
  Object<Circle>::New(0.5, {0, 1});
}