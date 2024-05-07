#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresGeneratorInterface.h"
#include "UObject/NoExportTypes.h"
#include "TresShapeLayoutObjectBase.generated.h"

class UTresSpawnActorManagerComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class ATresShapeLayoutObjectBase : public ATresGimmickGeneratorBase, public ITresGeneratorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ObjectArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> TransformArray;
    
    ATresShapeLayoutObjectBase(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

