#pragma once
#include "CoreMinimal.h"
#include "BX901_DarkCubeMineSpawnInfo.h"
#include "BX901_DarkCubeMineGroupSpawnInfo.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineGroupSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_DarkCubeMineSpawnInfo m_ProjSpawnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWaitTimeAfterFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
public:
    TRESGAME_API FBX901_DarkCubeMineGroupSpawnInfo();
};

