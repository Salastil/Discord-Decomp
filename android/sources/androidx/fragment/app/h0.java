package androidx.fragment.app;

import android.os.Bundle;

/* loaded from: classes.dex */
public final /* synthetic */ class h0 implements d3.d {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f2018b;

    public /* synthetic */ h0(int i5, Object obj) {
        this.a = i5;
        this.f2018b = obj;
    }

    @Override // d3.d
    public final Bundle a() {
        int i5 = this.a;
        Object obj = this.f2018b;
        switch (i5) {
            case 0:
                FragmentActivity fragmentActivity = (FragmentActivity) obj;
                String str = FragmentActivity.LIFECYCLE_TAG;
                fragmentActivity.markFragmentsCreated();
                fragmentActivity.mFragmentLifecycleRegistry.f(androidx.lifecycle.n.ON_STOP);
                return new Bundle();
            default:
                return ((FragmentManager) obj).a0();
        }
    }
}
