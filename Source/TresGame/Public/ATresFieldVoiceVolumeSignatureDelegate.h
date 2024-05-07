#pragma once
#include "CoreMinimal.h"
#include "ATresFieldVoiceVolumeSignatureDelegate.generated.h"

class UTresFieldVoiceBluePrint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FATresFieldVoiceVolumeSignature, FName, UserName, UTresFieldVoiceBluePrint*, bp);

