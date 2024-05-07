#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresTestPawnEnemyShip.generated.h"

class UTresStaticMeshComponent;

UCLASS(Blueprintable)
class ATresTestPawnEnemyShip : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_Mesh1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_Mesh2;
    
public:
    ATresTestPawnEnemyShip(const FObjectInitializer& ObjectInitializer);
};

