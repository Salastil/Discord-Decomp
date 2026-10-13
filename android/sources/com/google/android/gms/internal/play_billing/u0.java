package com.google.android.gms.internal.play_billing;

import java.util.concurrent.Executor;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class u0 implements Executor {

    /* renamed from: d, reason: collision with root package name */
    public static final u0 f5848d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ u0[] f5849e;

    static {
        u0 u0Var = new u0("INSTANCE", 0);
        f5848d = u0Var;
        f5849e = new u0[]{u0Var};
    }

    public static u0[] values() {
        return (u0[]) f5849e.clone();
    }

    @Override // java.util.concurrent.Executor
    public final void execute(Runnable runnable) {
        runnable.run();
    }

    @Override // java.lang.Enum
    public final String toString() {
        return "MoreExecutors.directExecutor()";
    }
}
