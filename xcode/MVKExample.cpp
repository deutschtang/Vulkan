/*
 *  MVKExample.cpp
 *
 *  Copyright (c) 2016-2017 The Brenwill Workshop Ltd.
 *  This code is licensed under the MIT license (MIT) (http://opensource.org/licenses/MIT)
 */


#include "MVKExample.h"
#include "examples.h"

void MVKExample::renderFrame() {
    _vulkanExample->renderFrame();
}

void MVKExample::keyPressed(uint32_t keyCode) {
  printf("handle keycode pressed %d", keyCode);
  
    _vulkanExample->keyPressed(keyCode);
}

void MVKExample::zoomOut(float dy) {
  _vulkanExample->zoom += dy * .01f * _vulkanExample->zoomSpeed;
  _vulkanExample->camera.translate(glm::vec3(-0.0f, 0.0f, dy * .01f * _vulkanExample->zoomSpeed));
  _vulkanExample->setWindowNeedUpdate();
}

void MVKExample::mouseMove(float dx, float dy) {
  _vulkanExample->rotation.x += dy * 1.25f * _vulkanExample->rotationSpeed;
  _vulkanExample->rotation.y -= dx * 1.25f * _vulkanExample->rotationSpeed;
  _vulkanExample->camera.rotate(glm::vec3(dy * _vulkanExample->camera.rotationSpeed, -dx * _vulkanExample->camera.rotationSpeed, 0.0f));
  _vulkanExample->setWindowNeedUpdate();
}

MVKExample::MVKExample(void* view) {
    _vulkanExample = new VulkanExample();
    _vulkanExample->initVulkan();
    _vulkanExample->setupWindow(view);
    _vulkanExample->initSwapchain();
    _vulkanExample->prepare();

}

MVKExample::~MVKExample() {
    delete _vulkanExample;
}
