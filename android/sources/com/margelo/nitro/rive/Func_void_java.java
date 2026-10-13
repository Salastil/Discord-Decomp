package com.margelo.nitro.rive;

import androidx.annotation.Keep;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Keep
@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0004\b\u0007\u0018\u00002\u00020\u0001B\u0015\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\u0007\u001a\u00020\u0004H\u0097\u0002R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\b"}, d2 = {"Lcom/margelo/nitro/rive/Func_void_java;", "Lcom/margelo/nitro/rive/Func_void;", "function", "Lkotlin/Function0;", "", "<init>", "(Lkotlin/jvm/functions/Function0;)V", "invoke", "rive-app_react-native_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ya.a
/* loaded from: classes3.dex */
public final class Func_void_java implements Func_void {

    @NotNull
    private final Function0<Unit> function;

    public Func_void_java(@NotNull Function0<Unit> function) {
        Intrinsics.checkNotNullParameter(function, "function");
        this.function = function;
    }

    @Override // com.margelo.nitro.rive.Func_void, kotlin.jvm.functions.Function0
    public /* bridge */ /* synthetic */ Object invoke() {
        mo1276invoke();
        return Unit.a;
    }

    @Override // com.margelo.nitro.rive.Func_void
    @Keep
    @ya.a
    /* renamed from: invoke */
    public void mo1276invoke() {
        this.function.invoke();
    }
}
