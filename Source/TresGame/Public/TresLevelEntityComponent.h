#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TresLevelEntityComponent.generated.h"

class ATresLevelEntity;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresLevelEntityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Version;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresLevelEntity* m_LevelEntityTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresLevelEntity* m_LevelEntity;
    
    UTresLevelEntityComponent();
};

