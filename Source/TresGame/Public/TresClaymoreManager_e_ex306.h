#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresClaymoreSwingDownInfo_e_ex306.h"
#include "Components/ActorComponent.h"
#include "TresClaymoreIdleInfo_e_ex306.h"
#include "TresClaymoreManager_e_ex306.generated.h"

class ATresProjectile_e_ex306_Claymore_Idle;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresClaymoreManager_e_ex306 : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex306_Claymore_Idle> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresClaymoreIdleInfo_e_ex306 m_IdleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresClaymoreSwingDownInfo_e_ex306 m_SwingDownInfo;
    
public:
    UTresClaymoreManager_e_ex306();
};

