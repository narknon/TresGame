#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraSpecialShipLoc.generated.h"

UCLASS(Blueprintable)
class ATresCameraSpecialShipLoc : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_PluralTargetOffset[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_PluralTargetLocalOffset[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FRotator m_PluralBaseRotation[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralLimitYawMin[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralLimitYawMax[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwitchWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwitchInterpTime;
    
public:
    ATresCameraSpecialShipLoc(const FObjectInitializer& ObjectInitializer);
};

