#pragma once
#include "CoreMinimal.h"
#include "TresGameMode.h"
#include "TresSoKcGameMode.generated.h"

class UDataTable;
class UStaticMesh;

UCLASS(Blueprintable, NonTransient)
class ATresSoKcGameMode : public ATresGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pCommonParameterDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_pInstancingDrawKeyHoleStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> m_BgmChangeEventThresholdList;
    
public:
    ATresSoKcGameMode(const FObjectInitializer& ObjectInitializer);
};

