#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ETresFaceAnimType.h"
#include "LastPlayedInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresFaceAnimPlayPriority.h"
#include "ETresRiskDodgeType.h"
#include "TresAnimInstance.generated.h"

class ATresPawnBase;
class UTresAnimSet;
class ATresCharPawnBase;
class ATresGimmickSkeletalBase;
class UAnimSequenceBase;
class UAnimMontage;
class UBlendSpaceBase;

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> MyAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_SubAnimSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceAnimSets2;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_AppendAnimSetList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_WorldAppendAnimSetList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceMatineeAnimSets;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceSubAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CacheStartPoseAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDefaultAnimAlwaysLoopPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDefaultAnimCheckSame: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAnimStopIfAnimAssetIsNone: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimPlayUseSlotNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FaceAnimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LipAnimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoPlayFaceAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFaceAnimType> m_AutoPlayFaceAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoPlayFaceAnimInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoPlayFaceAnimLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bKeepAnimMorphTargetCurveValue: 1;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ActiveSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_DefaultSlotGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_FaceAnimSlotGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName m_LipAnimSlotGroupName;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FLastPlayedInfo> m_LastPlayedInfo;
    
public:
    UTresAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresPawnBase* TryGetTresPawnOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGimmickSkeletalBase* TryGetTresGimmickSkeletalOwner();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCharPawnBase* TryGetTresCharPawnOwner();
    
    UFUNCTION(BlueprintCallable)
    float SQEX_PlaySlotAnimation(UAnimSequenceBase* Asset, FName SlotNodeName, float BlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_Montage_Play(UAnimMontage* MontageToPlay, float InBlendInTime, float InPlayRate, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SQEX_IsAnimLoop(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SQEX_IsAnimEnd(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimSetEyeRot(const FRotator& InEyeRot, float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimLipStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimLipSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimLipSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimLipPlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimLipPlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimEyeStop(float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_FaceAnimEyeSetCurrentTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_FaceAnimEyeSetBlendSpaceParam(const FVector& InBlendParam);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimEyePlayType(TEnumAsByte<ETresFaceAnimType> InAnimType, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_FaceAnimEyePlay(FName InAnimName, float InBlendInTime, bool InLoop, float InPlayRate, const FVector& InBlendParam, bool InSameCheck, TEnumAsByte<ETresFaceAnimPlayPriority> InPlayPriority);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_BlendSpace_Play(UBlendSpaceBase* BlendSpaceToPlay, FName InSlotNodeName, float InBlendInTime, bool InLoop, const FVector InBlendParam, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimStop(FName InSlotName, float InBlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimSetRootTransScale(FName InSlotName, float InXY, float InZ);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimSetCurrentTime(FName InSlotName, float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SQEX_AnimSetCurrentPlayRate(FName InSlotName, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimSetBlendSpaceParam(FName InSlotName, float InX, float InY, float InZ);
    
    UFUNCTION(BlueprintCallable)
    float SQEX_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, float InPlayRate, bool InRootMotion, float InRootMoveScaleXY, float InRootMoveScaleZ);
    
    UFUNCTION(BlueprintCallable)
    bool SQEX_AnimJumpToSection(FName InSlotName, const FName InSectionName, bool bJumpToSectionEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_AnimGetCurrentTime(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName SQEX_AnimGetCurrentSectionName(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_AnimGetCurrentPlayRate(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_AnimGetCurrentLength(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SQEX_AnimGetCurrentBlendParamMinMax(FName InSlotName, FVector& OutParamMin, FVector& OutParamMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SQEX_AnimGetBlendParamMinMax(const FName InAnimName, FVector& OutParamMin, FVector& OutParamMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_AnimGetAnimSequenceLength(const FName InAnimName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float SQEX_AnimGetAnimLength(const FName InAnimName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTresEventSkip();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartTurnToTarget(int32 InIndex, float inTurnSpeed);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartTraction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartReverseLeg();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartLookAt(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartIK(float InInterpTime, float InTargetAlpha);
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartFootStep(const FName InSocketName, const FVector& InLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void NotifyShot(FName InProjectileName, FName InSocketName, int32 InLocationIndex);
    
    UFUNCTION(BlueprintCallable)
    void NotifyLandStateEnded();
    
    UFUNCTION(BlueprintCallable)
    void NotifyJumpStart();
    
    UFUNCTION(BlueprintCallable)
    void NotifyFaceAt();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndTurnToTarget();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndTraction();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndReverseLeg();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndLookAt(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndIK(float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndFootStep(const FName InSocketName, const FVector& InLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableInput();
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnableChange();
    
    UFUNCTION(BlueprintCallable)
    void NotifyDamageCaution(TEnumAsByte<ETresRiskDodgeType> InDodgeType, float InTime, float inAngle);
    
};

