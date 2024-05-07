#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_ex308_PhantomBlitzBase.h"
#include "TresAttack3_e_ex308_PhantomBlitz.generated.h"

class USoundBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex308_PhantomBlitz : public UTresAttack3_e_ex308_PhantomBlitzBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableStartPlayVoice2D: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_FinishPlayVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableFinishPlayVoice2D: 1;
    
public:
    UTresAttack3_e_ex308_PhantomBlitz();
};

