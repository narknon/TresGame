#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickTS_01_BedCollisionDMatParam.h"
#include "TresGimmickTS_01_BedCollision.generated.h"

class USceneComponent;
class UTresStaticMeshComponent;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickTS_01_BedCollision : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyCollBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyCollFlat;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DynamicMaterialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickTS_01_BedCollisionDMatParam> m_DynamicMaterials;
    
    ATresGimmickTS_01_BedCollision(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_ChangeMaterialToMyMesh(int32 Index, UMaterialInterface* Material);
    
};

