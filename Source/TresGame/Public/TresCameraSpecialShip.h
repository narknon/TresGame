#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraSpecialShip.generated.h"

UCLASS(Blueprintable)
class ATresCameraSpecialShip : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralTargetDistance[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralTargetDistanceFront[2];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_PluralTargetOffset[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_PluralTargetLocalOffset[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralGuardDistance[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralGuardPitchOffset[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardDistanceInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardDistanceOutTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PluralRushDistance[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushDistanceInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushDistanceOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RushPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bShipAttach: 1;
    
public:
    ATresCameraSpecialShip(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BP_SetCameraSpecialShipRotation(FRotator Rot, bool bWorld);
    
};

