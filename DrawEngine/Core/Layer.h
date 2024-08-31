#pragma once

#include "Core/Base.h"
#include "Core/Timestep.h"
#include "Events/Event.h"

class Layer {
public:
  Layer(const std::string &name = "Layer");
  virtual ~Layer() = default;

  virtual void OnAttach() {}
  virtual void OnDetach() {}
  virtual void OnUpdate(Timestep& ts) {}
  virtual void OnGuiRender() {}
  virtual void OnEvent(Event &event) {}

  const std::string &GetName() const { return m_DebugName; }

protected:
  std::string m_DebugName;
};
