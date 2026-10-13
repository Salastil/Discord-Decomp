package com.google.android.gms.internal.play_billing;

import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class k0 {

    /* renamed from: d, reason: collision with root package name */
    public static final k0 f5754d = new k0();
    public final Runnable a;

    /* renamed from: b, reason: collision with root package name */
    public final Executor f5755b;

    /* renamed from: c, reason: collision with root package name */
    public k0 f5756c;

    public k0() {
        this.a = null;
        this.f5755b = null;
    }

    public k0(Runnable runnable, Executor executor) {
        this.a = runnable;
        this.f5755b = executor;
    }
}
