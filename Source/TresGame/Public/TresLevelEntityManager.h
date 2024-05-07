#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEncountSpawnRequest.h"
#include "TresLevelEntityManager.generated.h"

class UTresLevelEntityGroup;
class ATresLevelEntity;
class ATresPawnBase;

UCLASS(Blueprintable, Transient)
class TRESGAME_API UTresLevelEntityManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresLevelEntityGroup*> m_Groups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEncountSpawnRequest> m_EncountSpawnRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresPawnBase*> m_RemoveActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresLevelEntity*> m_PendingSpawn;
    
public:
    UTresLevelEntityManager();
};

