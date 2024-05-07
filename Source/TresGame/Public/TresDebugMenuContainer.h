#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuContainer.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuContainer : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresDebugMenuObject*> m_MenuObjects;
    
    UTresDebugMenuContainer();
};

