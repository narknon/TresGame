#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPatternActor_e_dw407b_Manager.generated.h"

class ATresPatternActor_e_dw407b_PillarLight;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ATresPatternActor_e_dw407b_Manager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresPatternActor_e_dw407b_PillarLight*> m_PatternList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
public:
    ATresPatternActor_e_dw407b_Manager(const FObjectInitializer& ObjectInitializer);
};

