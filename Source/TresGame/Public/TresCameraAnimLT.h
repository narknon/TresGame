#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraAnim.h"
#include "TresCameraTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraAnimLT.generated.h"

class AActor;
class UObject;
class ATresCameraAnimLT;

UCLASS(Blueprintable)
class ATresCameraAnimLT : public ATresCameraAnim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCameraTargetInfo m_LookOnlyTargetInfo;
    
public:
    ATresCameraAnimLT(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraAnimLT* BP_SpawnTresCameraAnimLT(UObject* WorldContextObject, TSubclassOf<ATresCameraAnimLT> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraLookOnlyTargetParam(AActor* LookTarget, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName);
    
};

