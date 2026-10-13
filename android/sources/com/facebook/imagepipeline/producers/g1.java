package com.facebook.imagepipeline.producers;

import java.util.ArrayDeque;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g1 {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayDeque f4735b;

    public g1(Executor executor) {
        Intrinsics.checkNotNullParameter(executor, "executor");
        this.a = executor;
        this.f4735b = new ArrayDeque();
    }
}
