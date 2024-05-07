#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresSpawnPointFilter.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnPointRayCastFilter.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, NonTransient)
class TRESGAME_API UTresSpawnPointRayCastFilter : public UTresSpawnPointFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_Position;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<AActor>> m_IgnoredActors;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> m_IgnoredComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ECollisionChannel> m_CollisionChannel;
    
    UTresSpawnPointRayCastFilter();
};

