#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerateWaterSurfaceNavMesh.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class ATresGenerateWaterSurfaceNavMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_NavModifierBoxComponent;
    
public:
    ATresGenerateWaterSurfaceNavMesh(const FObjectInitializer& ObjectInitializer);
};

