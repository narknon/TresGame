#pragma once
#include "CoreMinimal.h"
#include "EX359_ThrowEffectInfo.h"
#include "EX359_ThrowEffectInfoSet.generated.h"

class UParticleSystem;
class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FEX359_ThrowEffectInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_ThrowEffectInfo> m_ThrowEffectInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ParticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttach;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_OwnerProj;
    
public:
    TRESGAME_API FEX359_ThrowEffectInfoSet();
};

