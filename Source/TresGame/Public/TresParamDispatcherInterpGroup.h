#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpGroup.h"
#include "TresParamDispatcherInterpGroup.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresParamDispatcherInterpGroup : public UInterpGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DispatcherTag;
    
    UTresParamDispatcherInterpGroup();
};

