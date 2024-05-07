#pragma once
#include "CoreMinimal.h"
#include "TresPlayerStartInterface.h"
#include "Components/SceneComponent.h"
#include "TresPlayerStartComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresPlayerStartComponent : public USceneComponent, public ITresPlayerStartInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Enabled;
    
public:
    UTresPlayerStartComponent();
    
    // Fix for true pure virtual functions not being implemented
};

