#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugMenuObject.generated.h"

class UTresDebugMenuScene;
class UTresDebugMenuContainer;

UCLASS(Blueprintable, Transient)
class UTresDebugMenuObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuScene* m_MenuScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuContainer* m_Parent;
    
    UTresDebugMenuObject();
};

