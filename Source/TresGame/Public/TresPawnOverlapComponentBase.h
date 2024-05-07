#pragma once
#include "CoreMinimal.h"
#include "TresGimmickComponentBase.h"
#include "Engine/EngineTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "TresPawnOverlapComponentBase.generated.h"

class UPrimitiveComponent;
class UBodySetup;
class ATresCharPawnBase;
class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPawnOverlapComponentBase : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCollShapeAssetUnit> m_CollisionShapesSrc;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TArray<TWeakObjectPtr<ATresCharPawnBase>> m_OverlapList;
    
public:
    UTresPawnOverlapComponentBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBodyEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBodyBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

