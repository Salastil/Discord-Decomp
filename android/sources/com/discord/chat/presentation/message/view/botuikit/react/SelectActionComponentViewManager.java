package com.discord.chat.presentation.message.view.botuikit.react;

import a3.e;
import android.content.res.Resources;
import android.view.View;
import bs.c0;
import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.ComponentSerializer;
import com.discord.chat.bridge.botuikit.SelectComponent;
import com.discord.chat.presentation.message.messagepart.MessageMargins;
import com.discord.chat.presentation.message.view.botuikit.ComponentActionEventHandlers;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.WidthInfo;
import com.discord.chat.presentation.message.view.botuikit.components.SelectComponentView;
import com.discord.chat.presentation.message.view.botuikit.react.deserialization.ComponentDeserializerKt;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.react.utilities.SelfMeasuringSimpleViewManager;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.defaults.a;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.annotations.ReactProp;
import cs.h;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u0000 \u001c2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001\u001cB\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0014\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\n0\bH\u0016J\b\u0010\u000b\u001a\u00020\tH\u0016J\u0010\u0010\f\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\u000eH\u0014J$\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00022\b\u0010\u0012\u001a\u0004\u0018\u00010\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u0015H\u0016J\u0018\u0010\u0016\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00022\u0006\u0010\u0017\u001a\u00020\tH\u0007J\u001e\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u0011\u001a\u00020\u00022\f\u0010\u001a\u001a\b\u0012\u0004\u0012\u00020\u00100\u001bH\u0002R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001d"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/react/SelectActionComponentViewManager;", "Lcom/discord/react/utilities/SelfMeasuringSimpleViewManager;", "Lcom/discord/chat/presentation/message/view/botuikit/components/SelectComponentView;", "<init>", "()V", "reactEvents", "Lcom/discord/reactevents/ReactEvents;", "getExportedCustomDirectEventTypeConstants", "", "", "", "getName", "createViewInstance", "reactContext", "Lcom/facebook/react/uimanager/ThemedReactContext;", "updateState", "", "view", "props", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "stateWrapper", "Lcom/facebook/react/uimanager/StateWrapper;", "setModel", "model", "createSelectComponentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "onTap", "Lkotlin/Function0;", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ReactModule(name = SelectActionComponentViewManager.NAME)
@SourceDebugExtension({"SMAP\nSelectActionComponentViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SelectActionComponentViewManager.kt\ncom/discord/chat/presentation/message/view/botuikit/react/SelectActionComponentViewManager\n+ 2 ComponentDeserializer.kt\ncom/discord/chat/presentation/message/view/botuikit/react/deserialization/ComponentDeserializerKt\n*L\n1#1,79:1\n14#2,18:80\n*S KotlinDebug\n*F\n+ 1 SelectActionComponentViewManager.kt\ncom/discord/chat/presentation/message/view/botuikit/react/SelectActionComponentViewManager\n*L\n42#1:80,18\n*E\n"})
/* loaded from: classes.dex */
public final class SelectActionComponentViewManager extends SelfMeasuringSimpleViewManager<SelectComponentView> {

    @NotNull
    public static final String NAME = "SelectActionComponentView";

    @NotNull
    private final ReactEvents reactEvents = new ReactEvents(new Pair("onTap", Reflection.getOrCreateKotlinClass(OnSelectComponentTapEvent.class)));

    private final ComponentContext createSelectComponentContext(SelectComponentView view, Function0<Unit> onTap) {
        Resources resources = view.getResources();
        Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
        MessageMargins messageMargins = new MessageMargins(resources);
        ComponentContextDefaults componentContextDefaults = ComponentContextDefaults.INSTANCE;
        return new ComponentContext(messageMargins, "", componentContextDefaults.getGENERAL_HANDLERS(), componentContextDefaults.getMARKDOWN_OPTIONS(), componentContextDefaults.getMARKDOWN_HANDLERS(), componentContextDefaults.getMEDIA_HANDLERS(), ComponentActionEventHandlers.copy$default(componentContextDefaults.getCOMPONENT_HANDLERS(), null, null, new a(4, onTap), null, null, 27, null), new WidthInfo(0, 0, 0, 4, null), false, false, false, true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createSelectComponentContext$lambda$1(Function0 function0, String str) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        function0.invoke();
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit setModel$lambda$0(SelectActionComponentViewManager selectActionComponentViewManager, SelectComponentView selectComponentView) {
        selectActionComponentViewManager.reactEvents.emitEvent(selectComponentView, new OnSelectComponentTapEvent());
        return Unit.a;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return this.reactEvents.exportEventConstants();
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return NAME;
    }

    @ReactProp(name = "model")
    public final void setModel(@NotNull SelectComponentView view, @NotNull String model) {
        String e9;
        String str;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(model, "model");
        try {
            Component component = (Component) ComponentDeserializerKt.getJson().b(ComponentSerializer.INSTANCE, model);
            if (component instanceof SelectComponent) {
                view.configure((SelectComponent) component, createSelectComponentContext(view, new c0(26, this, view)));
                ViewMeasureExtensionsKt.measureAndLayout(view);
                return;
            }
            throw new IllegalStateException(("Expected " + Reflection.getOrCreateKotlinClass(SelectComponent.class).getSimpleName() + " but got " + Reflection.getOrCreateKotlinClass(component.getClass()).getSimpleName()).toString());
        } catch (Exception e10) {
            try {
                JsonObject j = h.j(ComponentDeserializerKt.getJson().d(model));
                Set keySet = j.f13610d.keySet();
                JsonElement jsonElement = (JsonElement) j.get("type");
                if (jsonElement == null || (str = h.k(jsonElement).a()) == null) {
                    str = "undefined";
                }
                e9 = "keys: " + keySet + ", type: " + str;
            } catch (Exception unused) {
                e9 = s4.h.e(model.length(), "unparseable JSON of ", " chars");
            }
            StringBuilder t5 = e.t("Error while deserializing ", Reflection.getOrCreateKotlinClass(SelectComponent.class).getSimpleName(), ": ", e10.getMessage(), ".\nReceived ");
            t5.append(e9);
            throw new IllegalStateException(t5.toString().toString());
        }
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public /* bridge */ /* synthetic */ Object updateState(View view, ReactStylesDiffMap reactStylesDiffMap, StateWrapper stateWrapper) {
        updateState((SelectComponentView) view, reactStylesDiffMap, stateWrapper);
        return Unit.a;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public SelectComponentView createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new SelectComponentView(reactContext, null, 0, 6, null);
    }

    public void updateState(@NotNull SelectComponentView view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.getReactSelfMeasurer().applyState(stateWrapper);
    }
}
