#pragma once
#include "CoreMinimal.h"
#include "TresMove1_e_ex026_Fly.h"
#include "TresCoopMove1_e_ex026_ColorSmoke.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopMove1_e_ex026_ColorSmoke : public UTresMove1_e_ex026_Fly {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationAccelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FormationDecelDistance;
    
public:
    UTresCoopMove1_e_ex026_ColorSmoke();
};

