package androidx.fragment.app;

import java.util.ArrayList;

/* loaded from: classes.dex */
public final class b1 implements a1 {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f1973b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ FragmentManager f1974c;

    public b1(FragmentManager fragmentManager, String str, int i5) {
        this.f1974c = fragmentManager;
        this.a = str;
        this.f1973b = i5;
    }

    @Override // androidx.fragment.app.a1
    public final boolean a(ArrayList arrayList, ArrayList arrayList2) {
        FragmentManager fragmentManager = this.f1974c;
        Fragment fragment = fragmentManager.f1936z;
        if (fragment != null && this.f1973b < 0 && this.a == null && fragment.getChildFragmentManager().U(-1, 0)) {
            return false;
        }
        return fragmentManager.V(arrayList, arrayList2, this.a, this.f1973b, 1);
    }
}
