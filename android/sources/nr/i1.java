package nr;

import kotlinx.coroutines.Job;

/* loaded from: classes3.dex */
public final class i1 implements i0, m {

    /* renamed from: d, reason: collision with root package name */
    public static final i1 f15624d = new i1();

    @Override // nr.m
    public final boolean a(Throwable th2) {
        return false;
    }

    @Override // nr.m
    public final Job getParent() {
        return null;
    }

    public final String toString() {
        return "NonDisposableHandle";
    }

    @Override // nr.i0
    public final void dispose() {
    }
}
