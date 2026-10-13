package com.facebook.imagepipeline.cache;

import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class MemoryCacheParams {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f4570b;

    /* renamed from: c, reason: collision with root package name */
    public final int f4571c;

    /* renamed from: d, reason: collision with root package name */
    public final int f4572d;

    /* renamed from: e, reason: collision with root package name */
    public final int f4573e;

    /* renamed from: f, reason: collision with root package name */
    public final long f4574f;

    public MemoryCacheParams(int i5, int i6, int i10, long j, int i11) {
        this.a = i5;
        this.f4570b = i6;
        this.f4571c = i10;
        this.f4572d = Integer.MAX_VALUE;
        this.f4573e = i11;
        this.f4574f = j;
    }

    public /* synthetic */ MemoryCacheParams(int i5, int i6, int i10, int i11) {
        this(i5, i6, i10, TimeUnit.MINUTES.toMillis(5L), i11);
    }
}
