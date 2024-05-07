#pragma once
#include "CoreMinimal.h"
#include "TresEnemyState_Appear.h"
#include "TresEnemyState_e_ex053_Appear.generated.h"

UCLASS(Blueprintable)
class UTresEnemyState_e_ex053_Appear : public UTresEnemyState_Appear {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PreAppearAnimText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PreAppearLoopAnimText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AppearAnimText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitTimer;
    
public:
    UTresEnemyState_e_ex053_Appear();
};

