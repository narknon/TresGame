#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuContainer.h"
#include "TresDebugMenuCommandMainWindow.generated.h"

class UTresDebugMenuObject;
class UTresDebugMenuCommandPage;

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuCommandMainWindow : public UTresDebugMenuContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuObject* m_BackGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuCommandPage* m_IndexPage;
    
    UTresDebugMenuCommandMainWindow();
};

