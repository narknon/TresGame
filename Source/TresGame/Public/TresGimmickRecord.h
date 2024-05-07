#pragma once
#include "CoreMinimal.h"
#include "TresGimmickRecordPlayTimeFinishedSignatureDelegate.h"
#include "TresGimmickSkeletalBase.h"
#include "TresGimmickRecordTurnedTopSpeedLightsSignatureDelegate.h"
#include "TresGimmickRecordUpdateLightsRateSignatureDelegate.h"
#include "TresGimmickRecordChangeAttachmentSignatureDelegate.h"
#include "TresGimmickRecordChangePlayingSignatureDelegate.h"
#include "TresGimmickRecordChangeOnRecordSignatureDelegate.h"
#include "TresGimmickRecord.generated.h"

class USoundBase;
class AActor;
class ATresGimmickFrogPerformer;
class USceneComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickRecord : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordTurnedTopSpeedLightsSignature TurnedTopSpeedLights;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordUpdateLightsRateSignature UpdateLightsRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordPlayTimeFinishedSignature PlayTimeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordChangeAttachmentSignature ChangeAttachment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordChangePlayingSignature ChangePlaying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickRecordChangeOnRecordSignature ChangeOnRecord;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleDumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleAccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachmentRecordLengthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachedSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickFrogPerformer*> FrogList;
    
public:
    ATresGimmickRecord(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SetSpeedRateImidiately(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRecordActive(bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchFade(float Rate, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRotationRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetLockInput(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenRegistedFrogs(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetFinished(bool Finish);
    
    UFUNCTION(BlueprintCallable)
    void SetBgm(USoundBase* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetAutomaticRotate(float NewSpeedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedParent(USceneComponent* pAttachedParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void CutsceneEndRecord();
    
    UFUNCTION(BlueprintCallable)
    void ClearPitchFade();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangePlayingState(bool Playing);
    
};

