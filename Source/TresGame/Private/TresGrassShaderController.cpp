#include "TresGrassShaderController.h"



ATresGrassShaderController::ATresGrassShaderController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WindSpeed = 0.05f;
    this->m_WindSize = 5000.00f;
    this->m_WindPower = 20.00f;
}

