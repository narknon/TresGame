#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresRaFollowActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRaGimmickBird.h"
#include "ETresCommandKind.h"
#include "TresGimmickRA_Impression_Bird.generated.h"

class ATresCharPawnBase;
class UTresReactorComponent;
class USQEX_ParticleAttachDataAsset;
class AActor;

UCLASS(Blueprintable)
class ATresGimmickRA_Impression_Bird : public ATresRaFollowActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdIdle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdFlyLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdFlyLoopFast;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdFlyAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATIdleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATFlyAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATFlyAwayStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATFlyLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATFlyLoopAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATFlyLoopMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_BirdATMatou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_PCMatou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StopPoint_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform StopPoint_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunStateEscapeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeRotationInterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationZAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag_UseSplineSecondPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag_DrawLookAtLoc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag_RootRotSlerpFlyAway: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* EffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BirdEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCharPawnBase> LookAtAnimPawnBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LookAtTargetBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_LookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_LookAT_Approach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_LookAT_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Motion_LookAT_IdleBreak;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* m_pReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pLookAtAnimPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pLookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaGimmickBird> m_BirdList;
    
public:
    ATresGimmickRA_Impression_Bird(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBirdFlyAway(bool bInFollowingPc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBirdAround();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBirdApproach();
    
private:
    UFUNCTION()
    void OnReactorCommand(ATresCharPawnBase* CommandCauser, TEnumAsByte<ETresCommandKind> CommandID, UTresReactorComponent* ReactorComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFollowingPc() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecLanding();
    
    UFUNCTION(BlueprintCallable)
    void ExecIdle();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyLoopAround();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyLoop(bool bMove);
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyAwayFromFollow();
    
    UFUNCTION(BlueprintCallable)
    void ExecFlyAway();
    
    UFUNCTION(BlueprintCallable)
    void ExecApproach();
    
};

