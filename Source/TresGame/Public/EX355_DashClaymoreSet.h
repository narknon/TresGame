#pragma once
#include "CoreMinimal.h"
#include "EX355_DashClaymoreSet.generated.h"

class ATresProjectile_e_ex355_Claymore_Idle;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX355_DashClaymoreSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex355_Claymore_Idle* m_Claymore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
public:
    TRESGAME_API FEX355_DashClaymoreSet();
};

