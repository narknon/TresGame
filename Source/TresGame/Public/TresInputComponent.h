#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresInputStruct.h"
#include "ETresGameKey.h"
#include "InputCoreTypes.h"
#include "TresInputComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresInputStruct Input;
    
public:
    UTresInputComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateInput(float Delta);
    
    UFUNCTION(BlueprintPure)
    bool IsRepeatGameKey(TEnumAsByte<ETresGameKey::Type> Key, bool enableRepeat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRepeat(FKey Key, bool enableRepeat);
    
    UFUNCTION(BlueprintPure)
    bool IsReleaseGameKey(TEnumAsByte<ETresGameKey::Type> Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelease(FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsPressGameKey(TEnumAsByte<ETresGameKey::Type> Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPress(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyDown(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputNone();
    
};

