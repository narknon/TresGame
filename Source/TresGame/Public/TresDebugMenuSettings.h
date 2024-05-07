#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresDebugMenuSettings.generated.h"

UCLASS(Blueprintable, Config=TresDebugMenu)
class UTresDebugMenuSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_English;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IgnoreGameFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_PassCodes;
    
    UTresDebugMenuSettings();
};

