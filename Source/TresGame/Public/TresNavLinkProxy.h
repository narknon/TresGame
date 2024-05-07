#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavLinkProxy.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
#include "TresNavLinkProxy.generated.h"

class UNavArea;

UCLASS(Blueprintable)
class ATresNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    ATresNavLinkProxy(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetNavLinkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNavLinkAreaClass(TSubclassOf<UNavArea> NewAreaClass);
    
};

