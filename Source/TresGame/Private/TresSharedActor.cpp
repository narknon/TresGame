#include "TresSharedActor.h"

class ATresCameraFix;

ATresCameraFix* ATresSharedActor::UpdateFixedCamera(float FieldOfView, FVector WorldLocation, FRotator WorldRotation) {
    return NULL;
}

ATresCameraFix* ATresSharedActor::SpawnFixedCamera(FName Name, bool bTakeover, float FieldOfView, FVector WorldLocation, FRotator WorldRotation) {
    return NULL;
}

ATresCameraFix* ATresSharedActor::GetFixedCamera() const {
    return NULL;
}

FName ATresSharedActor::GetCameraWorkEventName() const {
    return NAME_None;
}

void ATresSharedActor::DestroyFixedCamera() {
}

ATresSharedActor::ATresSharedActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pFixedCamera = NULL;
}

