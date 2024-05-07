#include "TresKHShaderController.h"

class UMaterialInterface;



void ATresKHShaderController::SetCurrentPostProcessMaterial(UMaterialInterface* inMaterial) {
}

ATresKHShaderController::ATresKHShaderController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentPostProcessMaterial = NULL;
}

