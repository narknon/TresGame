#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresCollisionDistanceData.h"
#include "TresCollisionDistanceManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UTresCollisionDistanceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCollisionDistanceData> DataArray;
    
public:
    UTresCollisionDistanceManagerComponent();
};

