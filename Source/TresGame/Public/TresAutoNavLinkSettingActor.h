#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateNavLinkArgs.h"
#include "TresAutoNavLinkSettingActor.generated.h"

UCLASS(Blueprintable)
class ATresAutoNavLinkSettingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGenerateNavLinkArgs GenerateSetting;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 Version;
    
    ATresAutoNavLinkSettingActor(const FObjectInitializer& ObjectInitializer);
};

