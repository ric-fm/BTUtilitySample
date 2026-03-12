// Copyright (c) 2026 Ricardo Franco.
// Licensed under the MIT License. See LICENSE file in the project root for full license information.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BTUSWorldUserWidget.generated.h"

class UBTUSWorldWidgetComponent;

/**
 * @class UBTUSWorldUserWidget
 *	@see UBTUSWorldWidgetComponent
 * 
 * Base class for world-space widgets.
 * This widget is automatically linked to its owning UBTUSWorldWidgetComponent
 * allowing it to easily access the owner's data.
 */
UCLASS()
class BTUTILITYSAMPLE_API UBTUSWorldUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetWorldWidgetComponent(UBTUSWorldWidgetComponent* InComponent);

	UFUNCTION(BlueprintCallable)
	AActor* GetWidgetOwnerActor() const;

	template<typename T>
	T* GetWidgetOwner() const
	{
		return Cast<T>(GetWidgetOwnerActor());
	}
	
protected:
	UPROPERTY(BlueprintReadOnly)
	TWeakObjectPtr<UBTUSWorldWidgetComponent> OwningWorldWidget;
};
