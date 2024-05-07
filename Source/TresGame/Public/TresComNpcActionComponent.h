#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "TresComNpcReaction.h"
#include "TresComNpcActorInfo.h"
#include "TresComNpcLookInfo.h"
#include "TresComNpcPrizeInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresComNpcActionComponent.generated.h"

class UTresComNpcActionContext;
class UTresComNpcVoiceSet;
class ATresCharPawnBase;
class AController;
class UTresComNpcActionSeq;
class UTresComNpcActionSet;
class UObject;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresComNpcActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresComNpcMovePawnSignature, ATresCharPawnBase*, InTargetPawn);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresComNpcMovePawnSignature OnMovePawnCreate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresComNpcMovePawnSignature OnMovePawnDelete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcActionSeq*> m_ActionSeqDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcActionSet*> m_ActionSetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFeelOutWorldZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxControllerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxDispActorNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraOutDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraOutRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraInFeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraOutFeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNearCameraOutFeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> m_AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForceBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_MoveDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_NoMoveDistanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrioryRatePcMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrioryRatePcMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrioryRateNoTurnMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPrioryRateNoTurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookAtLimitDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookAtBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_fLookAtLodLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInPushRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStaggerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveLineRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcReaction> m_ReactionLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcVoiceSet*> m_VoiceSetDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVoiceTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcActorInfo> m_EntityActorLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OneFrameSpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcLookInfo> m_LookAtAnimLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcPrizeInfo> m_SpecialPrizeLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PrizeLivingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vPrizeDropOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PrizeDropTimerMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PrizeDropTimerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresComNpcActionContext*> m_ActionContexts;
    
public:
    UTresComNpcActionComponent();
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSpecialPerformReaction(UObject* WorldContextObject, FName InReactionName, AActor* in_pActor, float in_fLength);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupValue(UObject* WorldContextObject, FName InGroupName, int32 inValue);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupActionSetAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetGroupActionSet(UObject* WorldContextObject, FName InGroupName, FName InSetName);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcSetDisplayNum(UObject* WorldContextObject, int32 InNum);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcForceOnActor(UObject* WorldContextObject, FName InTagName, bool InDispOn);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcForceOffActor(UObject* WorldContextObject, FName InTagName, bool InDispOff, bool InMoveOff);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcDisableFieldVoice(UObject* WorldContextObject, bool InSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void TresComNpcDisableCameraDir(UObject* WorldContextObject, bool InSwitch);
    
};

