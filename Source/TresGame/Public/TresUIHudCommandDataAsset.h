#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresSubCommandData.h"
#include "TresShortcutCommandData.h"
#include "TresUIHudCommandDataAsset.generated.h"

UCLASS(Blueprintable)
class UTresUIHudCommandDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSubCommandData MagicCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresShortcutCommandData ShortcutCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSubCommandData LinkCommands;
    
    UTresUIHudCommandDataAsset();
};

