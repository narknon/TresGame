#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramEffectInstance.generated.h"

class UParticleSystemComponent;
class ATresPhotoHologramActor;

USTRUCT(BlueprintType)
struct FTresPhotoHologramEffectInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_pPSCList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresPhotoHologramActor> m_pOwner;
    
public:
    TRESGAME_API FTresPhotoHologramEffectInstance();
};

