#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "TresDebugMenuInfo.h"
#include "TresGameViewportClient.generated.h"

class UTresDebugMenuScene;

UCLASS(Blueprintable, NonTransient)
class UTresGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresDebugMenuScene*> m_DebugMenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresDebugMenuScene* m_FocusDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuInfo> m_DebugMenuInfo;
    
    UTresGameViewportClient();
};

