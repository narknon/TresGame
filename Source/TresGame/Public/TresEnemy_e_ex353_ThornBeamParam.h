#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEnemyEx353ThornBeamIndex.h"
#include "TresEnemyEx353ThornBeamBeforeHitInfo.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.h"
#include "TresEnemy_e_ex353_ThornBeamParam.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresEnemy_e_ex353_ThornBeamParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353ThornBeamBeforeHitInfo> m_ThornBeamBeforeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353ThornBeamAfterHitInfo> m_ThornBeamAfterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353ThornBeamIndex> m_ThornBeamIndexList;
    
    UTresEnemy_e_ex353_ThornBeamParam();
};

