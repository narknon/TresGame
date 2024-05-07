#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraPluralFixRotTarget.generated.h"

class UObject;
class ATresCameraPluralFixRotTarget;

UCLASS(Blueprintable)
class ATresCameraPluralFixRotTarget : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_Rotations;
    
public:
    ATresCameraPluralFixRotTarget(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraPluralFixRotTarget* BP_SpawnTresCameraPluralFixRotTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraPluralFixRotTarget> CameraClass, const FName CameraName);
    
};

