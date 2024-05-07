#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresClipData.h"
#include "TresClipManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresClipManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresClipData> ClipDataArray;
    
public:
    UTresClipManagerComponent();
};

