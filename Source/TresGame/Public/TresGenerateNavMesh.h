#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateNavMesh.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ATresGenerateNavMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
public:
    ATresGenerateNavMesh(const FObjectInitializer& ObjectInitializer);
};

