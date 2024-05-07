#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TresInfluenceMapLayer.h"
#include "TresInfluenceMapVolume.generated.h"

UCLASS(Blueprintable)
class ATresInfluenceMapVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CellSize;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresInfluenceMapLayer m_LayerArray[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseNavmesh;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<uint32> m_Connections;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ValidIndices;
    
public:
    ATresInfluenceMapVolume(const FObjectInitializer& ObjectInitializer);
};

