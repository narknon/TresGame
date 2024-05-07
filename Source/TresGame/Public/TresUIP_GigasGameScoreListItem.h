#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_GigasGameScoreListItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_GigasGameScoreListItem : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ScoreTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Score;
    
public:
    UTresUIP_GigasGameScoreListItem();
};

