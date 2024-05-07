#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresDecoratorNavigationRayDir.h"
#include "TresBTDecorator_NavigationRayDir.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class UTresBTDecorator_NavigationRayDir : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDecoratorNavigationRayDir::Type> m_Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTestDepth;
    
    UTresBTDecorator_NavigationRayDir();
};

