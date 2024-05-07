#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresExternalActorInterpGroup.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresExternalActorInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<AActor> m_Actor;
    
    UTresExternalActorInterpGroup();
};

