#pragma once
#include "CoreMinimal.h"
#include "ETresGameKey.h"
#include "TresTaskBase.h"
#include "TresInputStruct.h"
#include "InputCoreTypes.h"
#include "TresInputTask.generated.h"

UCLASS(Blueprintable)
class UTresInputTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresInputStruct Input;
    
public:
    UTresInputTask();
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
    bool IsInputNone();
    
};

