#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "Engine/EngineTypes.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipSpecialWeaponBaseActor.generated.h"

class UTresGumiShipWeaponSequence;
class USceneComponent;
class UTresSkeletalMeshComponent;
class UTresGumiShipEffectSetComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpecialWeaponBaseActor : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pMeshBasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_pSkeltalWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipEffectSetComponent* m_pEffectSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fReAppearDelayTime;
    
public:
    ATresGumiShipSpecialWeaponBaseActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void _OnRequestPause(const bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _OnFinishedAppearConnection();
    
    UFUNCTION(BlueprintCallable)
    void _OnComponentEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnComponentBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void _OnChangeSpPoint(const float fOldPoint, const float fNewPoint, const float fRatio);
    
    UFUNCTION()
    void _CheckAttackTerm(const TEnumAsByte<ETresGumiShipWeaponSequencePort> ePort, bool& rbCanAttack);
    
};

