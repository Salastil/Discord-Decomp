package ss;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f18133b;

    /* renamed from: c, reason: collision with root package name */
    public b f18134c;

    /* renamed from: d, reason: collision with root package name */
    public long f18135d;

    public a(String name, boolean z5) {
        Intrinsics.checkNotNullParameter(name, "name");
        this.a = name;
        this.f18133b = z5;
        this.f18135d = -1L;
    }

    public abstract long a();

    public final String toString() {
        return this.a;
    }
}
