#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MemoryArchive.generated.h"

class UTresASProxyRSLBtnInfo;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable)
class UTresUIP_MemoryArchive : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SubtitleOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ContentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Thumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_ThumbnailIcon;
    
public:
    UTresUIP_MemoryArchive();
};

