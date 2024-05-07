#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_GenericTiming.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_GenericTiming : public UAnimNotify {
    GENERATED_BODY()
public:
    UTresAnimNotify_GenericTiming();
};

