package com.facebook.react.defaults;

import app.rive.runtime.kotlin.core.ViewModelTriggerProperty;
import com.discord.chat.presentation.message.view.botuikit.react.SelectActionComponentViewManager;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.defaults.DefaultTurboModuleManagerDelegate;
import com.margelo.nitro.rive.HybridViewModelImageProperty;
import com.margelo.nitro.rive.HybridViewModelListProperty;
import com.margelo.nitro.rive.HybridViewModelTriggerProperty;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4886d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function0 f4887e;

    public /* synthetic */ a(int i5, Function0 function0) {
        this.f4886d = i5;
        this.f4887e = function0;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object it) {
        List addCxxReactPackage$lambda$1$lambda$0;
        Unit addListener$lambda$0;
        Unit addListener$lambda$02;
        Unit addListener$lambda$03;
        Unit createSelectComponentContext$lambda$1;
        switch (this.f4886d) {
            case 0:
                addCxxReactPackage$lambda$1$lambda$0 = DefaultTurboModuleManagerDelegate.Builder.addCxxReactPackage$lambda$1$lambda$0(this.f4887e, (ReactApplicationContext) it);
                return addCxxReactPackage$lambda$1$lambda$0;
            case 1:
                addListener$lambda$0 = HybridViewModelImageProperty.addListener$lambda$0(this.f4887e, (Unit) it);
                return addListener$lambda$0;
            case 2:
                addListener$lambda$02 = HybridViewModelListProperty.addListener$lambda$0(this.f4887e, (Unit) it);
                return addListener$lambda$02;
            case 3:
                addListener$lambda$03 = HybridViewModelTriggerProperty.addListener$lambda$0(this.f4887e, (ViewModelTriggerProperty.TriggerUnit) it);
                return addListener$lambda$03;
            case 4:
                createSelectComponentContext$lambda$1 = SelectActionComponentViewManager.createSelectComponentContext$lambda$1(this.f4887e, (String) it);
                return createSelectComponentContext$lambda$1;
            default:
                Intrinsics.checkNotNullParameter(it, "it");
                return this.f4887e.invoke();
        }
    }
}
