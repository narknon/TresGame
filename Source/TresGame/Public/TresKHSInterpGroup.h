#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresKHSInterpGroup.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresKHSInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_RestoreWhenTerminated;
    
    UTresKHSInterpGroup();
};

