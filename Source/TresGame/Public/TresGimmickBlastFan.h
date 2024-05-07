#pragma once
#include "CoreMinimal.h"
#include "TresGimmickBlastFanChangeActiveFanSignatureDelegate.h"
#include "TresGimmickStaticBase.h"
#include "TresGimmickBlastFan.generated.h"

class UCurveFloat;
class USoundBase;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickBlastFan : public ATresGimmickStaticBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickBlastFanChangeActiveFanSignature ChangeActiveFan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFanCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PlaySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FanModeMax;
    
    ATresGimmickBlastFan(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateFanMode(int32 FanMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFanActive(bool ActiveFan);
    
    UFUNCTION(BlueprintCallable)
    void NextFanMode(float WaitTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeRotation(float SpeedRate);
    
};

