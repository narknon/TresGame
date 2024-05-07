#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresInterpGroup.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetActorTag;
    
    UTresInterpGroup();
};

