#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipGimmickCharaBase.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipGimmickCharaBase : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_pSkeletalMesh;
    
public:
    ATresGumiShipGimmickCharaBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    float PlayAnimByAnimSet(FName AnimName, FName SlotName, float fBlendInTime, int32 dFlags, int32 dEffectGroup, float fPlayRate, const FVector2D& rvRootTransScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnimEnd(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimCurrentTime(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetAnimCurrentName(const FName SlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimCurrentLength(const FName SlotName) const;
    
};

