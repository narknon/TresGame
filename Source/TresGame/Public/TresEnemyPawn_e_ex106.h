#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex106.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex106 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_LazerPointerEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_PointerEff;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LazerEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PointerEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PointerOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LazerPointerLengthExtra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_LazerDebug: 1;
    
    ATresEnemyPawn_e_ex106(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsMeshVisible();
    
    UFUNCTION(BlueprintCallable)
    void BP_ModifyLazerPointerLength(const FVector& TargetLocation, float LazerPointerScale);
    
    UFUNCTION(BlueprintCallable)
    void BP_InstallationPoint(const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void BP_DeletePointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeleteLazerPointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreatePointer();
    
    UFUNCTION(BlueprintCallable)
    void BP_CreateLazerPointer(FName AttachPointName);
    
};

