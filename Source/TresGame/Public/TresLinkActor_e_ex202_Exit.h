#pragma once
#include "CoreMinimal.h"
#include "TresLinkActor_e_ex202_Base.h"
#include "ETresLinkActorEx202Size.h"
#include "TresLinkActor_e_ex202_Exit.generated.h"

class ATresLinkActor_e_ex202_Entry;

UCLASS(Blueprintable)
class ATresLinkActor_e_ex202_Exit : public ATresLinkActor_e_ex202_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresLinkActor_e_ex202_Entry>> m_EntryActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLinkActorEx202Size> m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableCorrection: 1;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_OffsetDistances[3];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_AddMotionAlpha[3];
    
public:
    ATresLinkActor_e_ex202_Exit(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATresLinkActor_e_ex202_Entry*> GetEntryActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse() const;
    
};

