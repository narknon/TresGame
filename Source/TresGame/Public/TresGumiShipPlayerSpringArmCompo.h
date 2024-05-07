#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCustomSpringArmCompoBase.h"
#include "LockAtChangeInfo.h"
#include "CameraSensitivityInfoSet.h"
#include "TresGMInputResult.h"
#include "TresGumiShipPlayerSpringArmCompo.generated.h"

class ATresGumiShipPlayerControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerSpringArmCompo : public UTresGumiShipCustomSpringArmCompoBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReversePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReverseYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchUpLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchDownLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfResetStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAutoResetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDoResetRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockAtChangeInfo m_LockAtInterpInfoForDo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockAtChangeInfo m_LockAtInterpInfoForUndo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSensitivityInfoSet m_MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSensitivityInfoSet m_OtherSensitivity;
    
public:
    UTresGumiShipPlayerSpringArmCompo();
private:
    UFUNCTION(BlueprintCallable)
    void _OnInputRStickV2(const FTresGMInputResult& rResult, const ATresGumiShipPlayerControllerBase* pController);
    
};

