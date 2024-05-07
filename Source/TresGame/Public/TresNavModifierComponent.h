#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavModifierComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "TresNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bManualCalcBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAccurateNavigationData;
    
    UTresNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void SetUpdateNavigation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshNavModifier();
    
};

