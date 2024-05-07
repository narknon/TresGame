#pragma once
#include "CoreMinimal.h"
#include "TresBluePrintFieldVoiceBase.h"
#include "TresFieldVoiceBluePrint.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresFieldVoiceBluePrint : public UTresBluePrintFieldVoiceBase {
    GENERATED_BODY()
public:
    UTresFieldVoiceBluePrint();
};

