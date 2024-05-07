#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "TresCardSpawnInfo_e_ex307.h"
#include "TresEnemyCardManager_e_ex307.generated.h"

class AActor;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class UTresEnemyCardManager_e_ex307 : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_CardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCardSpawnInfo_e_ex307> m_CardSpawnInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CardSpawnParticleSystem;
    
public:
    UTresEnemyCardManager_e_ex307();
};

