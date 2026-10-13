package com.margelo.nitro.rive;

import com.margelo.nitro.rive.Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class z1 {
    @NotNull
    @ya.a
    public final Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName create(@NotNull HybridViewModelInstanceSpec value) {
        Intrinsics.checkNotNullParameter(value, "value");
        return new Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName.First(value);
    }

    @NotNull
    @ya.a
    public final Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName create(@NotNull DataBindMode value) {
        Intrinsics.checkNotNullParameter(value, "value");
        return new Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName.Second(value);
    }

    @NotNull
    @ya.a
    public final Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName create(@NotNull DataBindByName value) {
        Intrinsics.checkNotNullParameter(value, "value");
        return new Variant_HybridViewModelInstanceSpec_DataBindMode_DataBindByName.Third(value);
    }
}
