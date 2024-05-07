#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresCockpit.generated.h"

class UTresUIP_HudStatus;
class UTresUIP_HudOlaf;
class UTresCockpitParts;
class UTresUIP_HudTarget;
class UTresUIP_HudCommand;
class UTresUIP_HudLeft;
class UTresUIP_HudOperation;
class UTresUIP_HudBlackPearlChase;
class UTresUIP_HudRight;
class UTresUIP_HudRailScope;
class UTextureRenderTarget2D;
class UTresUIP_CenterInformation;
class UTresUIP_NaviMapGra;
class UTresUIP_HudSRide;
class UTresUIP_HudShining;
class UTresUIP_HudGigas;
class UTresUIP_HudGigasGameFront;
class UTresUIP_HudSnowSlide;
class UTresUIP_HudGigasGameBack;
class UTresUIP_HudBmm;
class UTresUIP_HudRalph;
class UAudioComponent;
class UTresUIP_HudSpecialShip;
class UTresUIP_HudLStickInput;
class UTresUIP_SpecialShip;
class UTresUIP_HudPlane;
class UTresUIP_HudSaix;
class UTresUIP_HudDance;
class UTresUIP_HudBaymax;
class UTresUIP_HudPudding;
class UTresUIP_HudWorkshop;
class UTresUIP_HudUx;
class UTresUIP_HudLuxord;
class UTresUIP_HudXehanort;
class UTresUIP_HudRightKairiCounter;
class UTresUIP_HudKeyHole;

UCLASS(Blueprintable)
class UTresCockpit : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    UTresCockpitParts* m_pCockpitParts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudTarget* m_pHudTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudStatus* m_pHudStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudCommand* m_pHudCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLeft* m_pHudLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRight* m_pHudRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudOperation* m_pHudOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRailScope* m_pHudRailScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CenterInformation* m_pCenterInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_NaviMapGra* m_pNaviMapGra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresCockpitParts* m_pAdditionalHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresCockpitParts* m_pAdditionalHUDAry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudSRide* m_pHudSRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGigas* m_pHudGigas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGigasGameFront* m_pHudGigasGameFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudGigasGameBack* m_pHudGigasGameBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudBmm* m_pHudBmm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRalph* m_pHudRalph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudBlackPearlChase* m_pHudBlackPearlChase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudSpecialShip* m_pHudSpecialShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SpecialShip* m_pSpecialShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudPlane* m_pHudPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudDance* m_pHudDance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudBaymax* m_pHudBaymax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudSaix* m_pHudSaix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudPudding* m_pHudPudding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudWorkshop* m_pHudWorkshop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudUx* m_pHudUx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudOlaf* m_HudOlaf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudSnowSlide* m_pHudSnowSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudShining* m_pHudShining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLuxord* m_pHudLuxord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudXehanort* m_pHudXehanort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRightKairiCounter* m_pKairiCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudLStickInput* m_pLStickInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudKeyHole* m_pKeyHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_NaviMapTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_HPAlertAudio;
    
public:
    UTresCockpit();
};

