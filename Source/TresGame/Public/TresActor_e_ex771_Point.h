#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyEEX771_POINT_KIND.h"
#include "TresActor_e_ex771_Point.generated.h"

UCLASS(Blueprintable)
class ATresActor_e_ex771_Point : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyEEX771_POINT_KIND> m_PointKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PointNo;
    
public:
    ATresActor_e_ex771_Point(const FObjectInitializer& ObjectInitializer);
};

