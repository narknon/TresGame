#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickHitComponentOnTresHitGimmickSignatureDelegate.h"
#include "Components/ActorComponent.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGimmickHitComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickHitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableHitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> m_ApplyHitChrUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_ApplyHitEnemyUniqueIDs;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_ApplyHitClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitComponentOnTresHitGimmickSignature OnTresHitGimmick;
    
    UTresGimmickHitComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresHitGimmick(const FHitResult& HitInfo, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableHit(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyHit(AActor* DamageCauser);
    
};

