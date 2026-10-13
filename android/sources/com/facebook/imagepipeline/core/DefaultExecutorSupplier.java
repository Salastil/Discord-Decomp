package com.facebook.imagepipeline.core;

import a5.t;
import ja.e;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class DefaultExecutorSupplier implements e {
    public final ExecutorService a;

    /* renamed from: b, reason: collision with root package name */
    public final ExecutorService f4589b;

    /* renamed from: c, reason: collision with root package name */
    public final ExecutorService f4590c;

    /* renamed from: d, reason: collision with root package name */
    public final ExecutorService f4591d;

    public DefaultExecutorSupplier(int i5) {
        ExecutorService newFixedThreadPool = Executors.newFixedThreadPool(2, new t("FrescoIoBoundExecutor", 2));
        Intrinsics.checkNotNullExpressionValue(newFixedThreadPool, "newFixedThreadPool(...)");
        this.a = newFixedThreadPool;
        ExecutorService newFixedThreadPool2 = Executors.newFixedThreadPool(i5, new t("FrescoDecodeExecutor", 2));
        Intrinsics.checkNotNullExpressionValue(newFixedThreadPool2, "newFixedThreadPool(...)");
        this.f4589b = newFixedThreadPool2;
        ExecutorService newFixedThreadPool3 = Executors.newFixedThreadPool(i5, new t("FrescoBackgroundExecutor", 2));
        Intrinsics.checkNotNullExpressionValue(newFixedThreadPool3, "newFixedThreadPool(...)");
        this.f4590c = newFixedThreadPool3;
        ExecutorService newFixedThreadPool4 = Executors.newFixedThreadPool(1, new t("FrescoLightWeightBackgroundExecutor", 2));
        Intrinsics.checkNotNullExpressionValue(newFixedThreadPool4, "newFixedThreadPool(...)");
        this.f4591d = newFixedThreadPool4;
        Intrinsics.checkNotNullExpressionValue(Executors.newScheduledThreadPool(i5, new t("FrescoBackgroundExecutor", 2)), "newScheduledThreadPool(...)");
    }
}
