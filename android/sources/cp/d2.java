package cp;

import java.lang.ref.WeakReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d2 {
    public final WeakReference a;

    /* renamed from: b, reason: collision with root package name */
    public final int f6893b;

    public d2(ClassLoader classLoader) {
        Intrinsics.checkNotNullParameter(classLoader, "classLoader");
        this.a = new WeakReference(classLoader);
        this.f6893b = System.identityHashCode(classLoader);
    }

    public final boolean equals(Object obj) {
        return (obj instanceof d2) && this.a.get() == ((d2) obj).a.get();
    }

    public final int hashCode() {
        return this.f6893b;
    }

    public final String toString() {
        String obj;
        ClassLoader classLoader = (ClassLoader) this.a.get();
        return (classLoader == null || (obj = classLoader.toString()) == null) ? "<null>" : obj;
    }
}
