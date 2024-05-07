#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "TresAutoNavLinkTestingActor.generated.h"

UCLASS(Blueprintable)
class ATresAutoNavLinkTestingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationLink PointLink;
    
    ATresAutoNavLinkTestingActor(const FObjectInitializer& ObjectInitializer);
};

