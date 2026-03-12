#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "BTUSWorldWidgetComponent.generated.h"


/**
 * @class UBTUSWorldWidgetComponent
 *	@see UBTUSWorldUserWidget
 * 
 * A custom WidgetComponent that handles the automatic initialization and linking between the world-space UI 
 * and the owner Actor, providing easy access to the owner's data for the UserWidget.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BTUTILITYSAMPLE_API UBTUSWorldWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
#pragma region UWidgetComponent
	virtual void InitWidget() override;
#pragma endregion
	
	AActor* GetWidgetOwnerActor() const { return GetOwner(); }

	template<typename T>
	T* GetWidgetOwner() const
	{
		return Cast<T>(GetOwner());
	}
};
