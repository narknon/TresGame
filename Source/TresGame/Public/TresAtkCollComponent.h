#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresAtkColHitEffect.h"
#include "TresAtkCollShapeAssetUnit.h"
#include "TresAtkCollAutoActivate.h"
#include "TresAtkCollComponent.generated.h"

class AActor;
class ATresAtkCollManager;
class UTresChrBaseParam;
class UTresAtkCollPrimitive;
class UTresChrDataTableSet;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TRESGAME_API UTresAtkCollComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_IgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_pOwnerBaseParam;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pOwnerDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAtkCollShapeAssetUnit> CollisionShapesSrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAtkColHitEffect> m_HitEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitEffectRandomOffsetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAtkCollAutoActivate> m_CollAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAtkCollPrimitive*> m_AtkColls;
    
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAtkCollManager* m_Mgr;
    
public:
    UTresAtkCollComponent();
};

