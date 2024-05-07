#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBCoopPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex308.generated.h"

class AActor;
class USoundBase;
class USphereComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex308 : public ATresEnemyXIIIBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpFadeInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_bEnableRevengeVoice2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
public:
    ATresEnemyPawn_e_ex308(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringWarpCutCooldown_Phase2();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringPhantomBlitzCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetNumWarpCut(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDrawPullCollision(int32 Enable);
    
};

