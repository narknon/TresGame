#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGenerator_e_ex367_PlayVoise.generated.h"

class USoundBase;
class UAudioComponent;

UCLASS(Blueprintable)
class ATresGenerator_e_ex367_PlayVoise : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayVoiceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PlayVoiceWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_VoiceAudioComponent;
    
public:
    ATresGenerator_e_ex367_PlayVoise(const FObjectInitializer& ObjectInitializer);
};

