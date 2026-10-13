package com.margelo.nitro.rive;

import com.margelo.nitro.rive.EventPropertiesOutput;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class r {
    @NotNull
    @ya.a
    public final EventPropertiesOutput create(boolean z5) {
        return new EventPropertiesOutput.First(z5);
    }

    @NotNull
    @ya.a
    public final EventPropertiesOutput create(@NotNull String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        return new EventPropertiesOutput.Second(value);
    }

    @NotNull
    @ya.a
    public final EventPropertiesOutput create(double d6) {
        return new EventPropertiesOutput.Third(d6);
    }
}
