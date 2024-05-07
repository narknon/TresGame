#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraRotTargetLT.generated.h"

class AActor;
class UObject;
class ATresCameraRotTargetLT;

UCLASS(Blueprintable)
class ATresCameraRotTargetLT : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCameraTargetInfo m_LookOnlyTargetInfo;
    
public:
    ATresCameraRotTargetLT(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetLT* BP_SpawnTresCameraRotTargetLT(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetLT> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraLookOnlyTargetParam(AActor* LookTarget, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName);
    
};

