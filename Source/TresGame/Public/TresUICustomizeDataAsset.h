#pragma once
#include "CoreMinimal.h"
#include "ETresCommandKind.h"
#include "Engine/DataAsset.h"
#include "TresUICustomizeMagicCommand.h"
#include "TresUICustomizeCommand.h"
#include "TresUICustomizeDataAsset.generated.h"

UCLASS(Blueprintable)
class UTresUICustomizeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUICustomizeMagicCommand> MagicCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUICustomizeCommand> LinkCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresCommandKind>> ItemCommands;
    
    UTresUICustomizeDataAsset();
};

