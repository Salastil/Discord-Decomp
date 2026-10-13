package io.sentry;

import java.io.File;

/* loaded from: classes3.dex */
public abstract class v {
    public final x0 a;

    /* renamed from: b, reason: collision with root package name */
    public final ILogger f12048b;

    /* renamed from: c, reason: collision with root package name */
    public final long f12049c;

    /* renamed from: d, reason: collision with root package name */
    public final m6 f12050d;

    public v(x0 x0Var, ILogger iLogger, long j, int i5) {
        this.a = x0Var;
        this.f12048b = iLogger;
        this.f12049c = j;
        this.f12050d = new m6(new f(i5));
    }

    public abstract boolean a(String str);

    public abstract void b(File file, Hint hint);
}
