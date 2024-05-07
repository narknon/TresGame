#include "TresCameraDebugOrthoTopView.h"

ATresCameraDebugOrthoTopView::ATresCameraDebugOrthoTopView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_OrthoWidth = 1000.00f;
    this->m_OrthoYaw = 0.00f;
    this->m_OrthoMode = 0;
    this->m_OrthoTall = 1000.00f;
    this->m_OrthoWidthIncrement = 1000.00f;
}

