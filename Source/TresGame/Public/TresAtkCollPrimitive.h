#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresAtkCollPrimitive.generated.h"

class UCurveVector;
class UStaticMesh;
class USoundBase;
class UBodySetup;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, Within=TresAtkCollComponent, meta=(BlueprintSpawnableComponent))
class UTresAtkCollPrimitive : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* m_SizeVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveVector* m_ScaleVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_HitSE;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_DefaultHitSE;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
public:
    UTresAtkCollPrimitive();
};

