#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickObjectBase.h"
#include "MashRotatorDataTable.h"
#include "ETresGumiShipTravelPointID.h"
#include "TresGumiShipGimmickTravelPoint.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipGimmickTravelPoint : public ATresGumiShipGimmickObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMashRotatorDataTable> m_MeshRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ActiveCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GlowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipTravelPointID m_WorldMapID;
    
public:
    ATresGumiShipGimmickTravelPoint(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _SetMeshLoopCall(float LoopTime);
    
};

