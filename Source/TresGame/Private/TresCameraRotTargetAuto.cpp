#include "TresCameraRotTargetAuto.h"
#include "Templates/SubclassOf.h"

class UObject;
class ATresCameraRotTargetAuto;

ATresCameraRotTargetAuto* ATresCameraRotTargetAuto::BP_SpawnTresCameraRotTargetAuto(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetAuto> CameraClass, const FName CameraName) {
    return NULL;
}

ATresCameraRotTargetAuto::ATresCameraRotTargetAuto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

