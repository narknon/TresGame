#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ATresFieldVoiceVolumeSignatureDelegate.h"
#include "TresFieldVoiceVolume.generated.h"

class UTresFieldVoiceBluePrint;
class UTresFieldVoiceCommonParam;

UCLASS(Blueprintable)
class ATresFieldVoiceVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTresFieldVoiceBluePrint*> m_BluePrints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresFieldVoiceCommonParam* m_pCommonParam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FATresFieldVoiceVolumeSignature OnPlayFieldVoice;
    
public:
    ATresFieldVoiceVolume(const FObjectInitializer& ObjectInitializer);
};

