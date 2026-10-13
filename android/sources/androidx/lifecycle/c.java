package androidx.lifecycle;

import java.lang.reflect.Method;

/* loaded from: classes.dex */
public final class c {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Method f2174b;

    public c(int i5, Method method) {
        this.a = i5;
        this.f2174b = method;
        method.setAccessible(true);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.a == cVar.a && this.f2174b.getName().equals(cVar.f2174b.getName());
    }

    public final int hashCode() {
        return this.f2174b.getName().hashCode() + (this.a * 31);
    }
}
