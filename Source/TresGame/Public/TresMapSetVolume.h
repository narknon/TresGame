#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresMapSetVolume.generated.h"

class UTresMapSet;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresMapSetVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMapSet* MapSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName commandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverlapManager;
    
public:
    ATresMapSetVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void ChangeMapSetAndCommandName(UTresMapSet* newMapSet, FName newCommandName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMapSet(UTresMapSet* newMapSet);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCommandName(FName newCommandName);
    
};

