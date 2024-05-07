#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNavLinkExtendedInfo.h"
#include "TresNavLinkExtendedInfoActor.generated.h"

UCLASS(Blueprintable)
class ATresNavLinkExtendedInfoActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint32 Version;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TMap<FName, uint32> ExtendedInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresNavLinkExtendedInfo> ExtendedDataArray;
    
public:
    ATresNavLinkExtendedInfoActor(const FObjectInitializer& ObjectInitializer);
};

