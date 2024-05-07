#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresFieldVoiceTask.generated.h"

class UTresFieldVoice;
class UAudioComponent;
class UObject;

UCLASS(Blueprintable)
class UTresFieldVoiceTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* m_pAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_pAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_pWho;
    
public:
    UTresFieldVoiceTask();
};

