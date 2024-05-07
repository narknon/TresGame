#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresEnemyEEX773_POINT_KIND.h"
#include "TresActor_e_ex773_Point.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ATresActor_e_ex773_Point : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEEX773_POINT_KIND m_PointKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PointNo;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    ATresActor_e_ex773_Point(const FObjectInitializer& ObjectInitializer);
};

