#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuText.generated.h"

class UFont;

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuText : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFont* m_Font;
    
    UTresDebugMenuText();
};

