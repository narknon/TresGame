#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "DancePlayerAction.h"
#include "EDanceActorType.h"
#include "TresRaFestivalReplaceMesh.h"
#include "EDancePerformType.h"
#include "TresDanceEffectColorParam.h"
#include "EDanceClapMissionType.h"
#include "SpecialMoveMissionParam.h"
#include "EDanceSpecialPerformType.h"
#include "Engine/LatentActionManager.h"
#include "ETresUIHudDanceResult.h"
#include "TresRaFestivalDanceManager.generated.h"

class ATresCharPawnBase;
class USQEX_ParticleAttachDataAsset;
class UUserWidget;
class ATresRaPairDancePawn;
class UMaterialParameterCollection;
class UTresPlayerState_FestivalDance;
class AFestivalDancePawn_n_ra201;
class UParticleSystem;
class UObject;
class USoundBase;
class UTresRaFestivalDanceSplineComponent;
class ATresRaDanceNpc;
class ATresRaSpecialPerformActor;
class AFestivalDancePawn_n_ra203;
class USQEXSEADBGMSlotController;
class UTresTimerTask;

UCLASS(Blueprintable)
class ATresRaFestivalDanceManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresOnWaveClearPerformEnd, int32, waveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresOnDanceRhythmBeat);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FTresOnDanceCameraPerform, ATresCharPawnBase*, InTargetChara, EDanceActorType, InPartnerType, int32, InChainCount, int32, InActionLevel, EDancePerformType, InPerformType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Idle_MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Idle_MotionName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdleLoop_FourBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDancePlayerAction Action_Spin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDancePlayerAction Action_Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Finish_MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FinishFirstHalf_MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeDistanceFromWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PairDance_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PairDance_SpeedInChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PairDance_RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionIn_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionLoop_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_MotionOut_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_Change;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PairDance_ChangeFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PairDance_ChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PairDance_ExtraPerformCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PairDanceFourBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraValidTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChainCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DanceUIBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresRaPairDancePawn> PairDancePawnBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> SpecialMoveUIBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpecialMove_OrderReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialMoveUI_ScreenPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecialMoveUI_IconInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputAcceptInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAcceptRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flag_UseTimingBasePerform: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAcceptRangeLv1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAcceptRangeLv2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAcceptRangeLv3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* EffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMarkerEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PairDanceEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* EffectMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDanceEffectColorParam> EffectColor_Spin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDanceEffectColorParam> EffectColor_Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDanceEffectColorParam> EffectColor_Clap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDanceEffectColorParam> EffectColor_ClapSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistance_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistance_Pair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraDistance_LerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Camera_ValidActionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CameraTargetChangeFlag_Male: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CameraTargetChangeFlag_Female: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelDanceStartNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelDanceMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelDanceMaxNumFirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelDanceAddNpcInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelDanceTotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelDanceMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelDanceSuccessEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlynnSplineStayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelMarkerTotalBeatCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RapunzelMarkerUpdateStartCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelMarkerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelMarkerScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelCameraDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelCameraPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelCameraPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelCameraPitchStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RapunzelCameraRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRaFestivalReplaceMesh> m_ReplaceMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TensionUpDistance_PerformNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TensionUpDistance_PerformGreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TensionUpEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcPauseCheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcPauseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcPauseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcTakeDistanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClapSpotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClapSpotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClapSpotMinInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClapSpotShowTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClapSpotOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDanceClapMissionType> ClapSpotMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TestEffect_ClapSpotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClapSpotEffectScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClapSuccessEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_ChangeSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_OutIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_Failed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RapunzelDanceSE_Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RapunzelDanceSE_Failed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RapunzelDanceSE_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RapunzelDanceSE_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ClapSE_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ClapSE_Spot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_NpcReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_CountStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SE_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Wave1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Center1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Event1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Wave2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Center2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_Event2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmSection_RevisitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmEventSection_ChangeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebugFlag_UseCustomRate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebugFlag_DebugDraw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DebugFlag_DebugDrawSpline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Debug_CustomRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Debug_CollisionAdjustDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmTwoBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmFourBeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmFourBeatNear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmInputStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceRhythmBeat OnDanceRhythmInputCenter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPerformSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPairDanceJoinStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPairDanceMoveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPairDanceEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPairChangeSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnDanceCameraPerform OnPairChangeFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOnWaveClearPerformEnd OnWaveClearPerformEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRaFestivalDanceSplineComponent* MySplineMover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresRaDanceNpc*> m_NpcList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_NormalDanceNpcList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_RapunzelDanceNpcList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresRaDanceNpc>> m_StandByNpcList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresRaSpecialPerformActor*> m_SpecialPerformActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFestivalDancePawn_n_ra201* m_pRapunzel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFestivalDancePawn_n_ra203* m_pFlynn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresRaDanceNpc> m_pTargetNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresRaDanceNpc> m_pPartnerNpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_DanceUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_SpecialMoveUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<USQEXSEADBGMSlotController> m_pBgmSlot;
    
public:
    ATresRaFestivalDanceManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void UpdateResult(int32 totalScore, int32 nGauge, int32 nGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void StartSpecialMove(TArray<FSpecialMoveMissionParam> MissionList, bool InOrder, float TotalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetWaveClear(int32 waveIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTimingBasePerformEnable(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialPerformReady(EDanceSpecialPerformType InPerformType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialPerformEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelMissionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceStart();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceReady();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceFinishReady();
    
    UFUNCTION(BlueprintCallable)
    void SetRapunzelDanceEnd(bool bCommandFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceRotateSpeed(float RotateSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetPairDanceFourBeatCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActionSetIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetHudLeftScore(int32 nScore);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceNotifyFinish();
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceGauge(int32 nGauge, int32 nGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceCountDown(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void SetHudDanceAddedTime(float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraValidTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraPerformCountMax(int32 InCountMax);
    
    UFUNCTION(BlueprintCallable)
    void SetDanceSuspend();
    
    UFUNCTION(BlueprintCallable)
    void SetDanceStart(bool bRevisit, int32 nScoreRecord, int32 nChainRecord, int32 nStartWave);
    
    UFUNCTION(BlueprintCallable)
    void SetDanceResume();
    
    UFUNCTION(BlueprintCallable)
    void SetDanceResultMode(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetDancePlayerStart();
    
    UFUNCTION(BlueprintCallable)
    void SetDanceEnd();
    
    UFUNCTION(BlueprintCallable)
    void ResetSpecialMove(bool IsTimeReset);
    
    UFUNCTION(BlueprintCallable)
    void ResetPairDanceSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetPairDanceRotateSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWaveClearPerformEnd(int32 waveIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTensionUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpecialPerformStart(FName ActorName, ATresRaSpecialPerformActor* inActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpecialPerformEnd(FName ActorName, ATresRaSpecialPerformActor* inActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpecialMoveSucceed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelMissionUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelInput(bool bIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelDanceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelDanceOpeningStart(bool bIsWave2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelDanceFinish(bool bCommandFinish);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRapunzelDanceEndingStart(bool bIsWave2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerInput(bool bIsSuccess, bool bInPairDance, int32 tensionLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDebugTimerStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDebugTimerResume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClapAction(bool bInClapSpot, int32 ComboCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveChainSucceed(int32 currentChainCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveChainFailed(int32 currentChainCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveChainEnd(int32 currentChainCount);
    
    UFUNCTION(BlueprintCallable)
    void OpenRevisitTimerCountDown(UTresTimerTask* pTask, float fStartTime, float fWarningTime, float fAlertTime);
    
    UFUNCTION(BlueprintCallable)
    void OpenHudDanceResult(UObject* WorldContextObject, int32 nScore, int32 nChain, ETresUIHudDanceResult rankKind, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialPerformStart(FName ActorName, ATresRaSpecialPerformActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialPerformEnd(FName ActorName, ATresRaSpecialPerformActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPerformEnd(UTresPlayerState_FestivalDance* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerButtonInput(UTresPlayerState_FestivalDance* InPlayerState, EDancePerformType perform, int32 performLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPairDanceFourBeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighestChainCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExtraPerformCountMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentChainCount() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSpecialMove();
    
    UFUNCTION(BlueprintCallable)
    void CloseHudDanceResult();
    
    UFUNCTION(BlueprintCallable)
    void ActivateStandByNpc(int32 InGroupID);
    
};

