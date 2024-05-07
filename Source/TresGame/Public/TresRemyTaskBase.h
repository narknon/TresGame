#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresRemyTaskBase.generated.h"

class UTresRemyMouseParameter;

UCLASS(Blueprintable)
class UTresRemyTaskBase : public UTresTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresRemyMouseParameter* MouseParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MousePowerMulRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MousePowerChangeLimit;
    
    UTresRemyTaskBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputMouseDir(FVector2D Dir, float degAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresRemyMouseParameter* GetParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMouseRotationDir();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetMousePower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMousePosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetMouseMoveDir3D();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetMouseMoveDir();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetMouseMoveDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIE_TickOwner(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIE_SetValue(int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BIE_IsActionSuccessByPC(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float BIE_GetActionValueByPC(int32 Index);
    
};

