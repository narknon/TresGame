#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "ETresSevenPrincessType.h"
#include "TresDetectCollShapeAssetUnit2D.h"
#include "TresPhotoMissionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPhotoMissionComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PhotoMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSevenPrincess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresSevenPrincessType m_PrincessType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDevilWaveEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilWaveEffectCheckCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDetectCollShapeAssetUnit2D> m_CollisionShapesSrc2D;
    
public:
    UTresPhotoMissionComponent();
};

