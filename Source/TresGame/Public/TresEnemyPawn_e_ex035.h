#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresBadStatusType.h"
#include "TresEnemyPawn_e_ex035.generated.h"

class USceneComponent;
class ATresReserveActor_e_ex035;
class ATresCharPawnBase;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex035 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresReserveActor_e_ex035> ReserveActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fGravityScale;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_BoolArray[10];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWallMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_E_EX011Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_JumpLinkComp;
    
public:
    ATresEnemyPawn_e_ex035(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool ValidateStep(ATresCharPawnBase* inOwnerPawn, FVector Velocity, float GravityScale, FText& outReason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool TestSweepMulti(FHitResult& OutHit, FVector Start, FVector End) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDestinationCandidate(TArray<AActor*> inDestinationArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnTree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnCarriage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNutsThrowAppear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCatchMe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLookAtLocation_e_ex035(FVector inOriginalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtAlpha_e_ex035();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresBadStatusType GetBadStatus_e_ex035() const;
    
};

