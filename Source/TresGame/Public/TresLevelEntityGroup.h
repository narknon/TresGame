#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresLevelEntityGroup.generated.h"

class UTresLevelEntityManager;

UCLASS(Blueprintable, Transient)
class TRESGAME_API UTresLevelEntityGroup : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresLevelEntityManager* m_Manager;
    
public:
    UTresLevelEntityGroup();
};

