#pragma once
#include "CoreMinimal.h"
#include "TresAIPawnBase.h"
#include "TresComNpcScaleData.h"
#include "TresComNpcMaterialInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_c_npc.generated.h"

class UTresReactorComponent;
class UMaterialInterface;
class AActor;
class UTresAnimSet;

UCLASS(Blueprintable)
class ATresNpcPawn_c_npc : public ATresAIPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RecordName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IdleAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ActionSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BodyColType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PoseGroupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ReplaceMovePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bBodyImmovable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableStagger: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableBgCave: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableReactor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableBodyCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableNavModifier: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableLookAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUniqueComNpc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bForceAddComAction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ReplaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_MatData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresComNpcScaleData m_ScaleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcMaterialInfo> m_MaterialInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNearCameraRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LookAtBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultFaceEyeAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultFaceLipAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FaceEyeBlinkMinTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FaceEyeBlinkMaxTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IdleBreakMinTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IdleBreakMaxTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IdleAnimNameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IdleAnimNameLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IdleAnimNameEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTurnWaitTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookAtBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAddYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LinkActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDispDebugInfo: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    ATresNpcPawn_c_npc(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSubMeshFacePlay(FName inSubMeshName, FName InLipAnimName, FName inEyeAnimName, float in_fBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSnowBallBody(int32 InType, bool inChatMode);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovable(bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    bool RemoteEventComNpc(FName inEventName);
    
    UFUNCTION(BlueprintCallable)
    void PlayLipAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange);
    
    UFUNCTION(BlueprintCallable)
    void PlayEyeAnim(const FName& InAnimName, float in_fBlendTime, bool in_bPriortyChange, bool in_bForceChange, bool in_bNoBlink);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecordName(FName InName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStarMode(float in_fTime);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeActionComNpc(FName inActionName);
    
    UFUNCTION(BlueprintCallable)
    void BP_TalkTurnStart(float InReturnTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_TalkTurnDefault();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTalkMotion(FName InAnimStart, FName InAnimLoop, FName InAnimEnd);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaterial(FName InMaterialName, FName InParamName, float inValue);
    
    UFUNCTION(BlueprintCallable)
    FVector BP_SetLookTarget(AActor* inActor, FVector InLocation, float InReturnTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetIdleMotion(FName InAnimName);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLookAt();
    
    UFUNCTION(BlueprintCallable)
    void BP_ReqEndMotion();
    
};

