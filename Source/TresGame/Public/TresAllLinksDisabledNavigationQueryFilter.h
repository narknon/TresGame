#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "TresAllLinksDisabledNavigationQueryFilter.generated.h"

UCLASS(Blueprintable)
class UTresAllLinksDisabledNavigationQueryFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UTresAllLinksDisabledNavigationQueryFilter();
};

