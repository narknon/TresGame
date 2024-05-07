#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresWinnieData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresWinnieData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerAnimationDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharacterAnimationDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SoundEffectDataRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VoiceDataRef;
    
public:
    UTresWinnieData();
};

