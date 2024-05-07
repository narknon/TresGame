#pragma once
#include "CoreMinimal.h"
#include "ex064Parameter.h"
#include "TresEnemyPawnBase.h"
#include "ex064ShipBodyParameter.h"
#include "ex064WallPartsParameter.h"
#include "TresEnemyPawn_e_ex064.generated.h"

class UTresSkeletalMeshComponent;
class ATresEnemyPawn_e_ex064_Wall;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex064 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_ShipBodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_ShipMastMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fex064ShipBodyParameter m_ShipParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fex064WallPartsParameter m_WallPartsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fex064Parameter m_Param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyPawn_e_ex064_Wall*> m_WallPartsList;
    
public:
    ATresEnemyPawn_e_ex064(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool RequestWallPartsRespawn(float waitRespawnTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShipHP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWallPartsNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWallPartsMaxNum() const;
    
    UFUNCTION(BlueprintCallable)
    void AddShipHP(int32 Value);
    
};

