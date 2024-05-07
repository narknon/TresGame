#pragma once
#include "CoreMinimal.h"
#include "Ex053SpawnData.generated.h"

class ATresEnemyPawn_e_ex053;
class AActor;

USTRUCT(BlueprintType)
struct FEx053SpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresEnemyPawn_e_ex053> wpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> wpSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Wait;
    
    TRESGAME_API FEx053SpawnData();
};

