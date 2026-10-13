package dn;

import androidx.fragment.app.FragmentManager;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends b {
    public final en.i a;

    /* renamed from: b, reason: collision with root package name */
    public final int f7617b;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f7618c;

    public a(en.i fragment, int i5, boolean z5) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        this.a = fragment;
        this.f7617b = i5;
        this.f7618c = z5;
    }

    @Override // dn.b
    public final void a(FragmentManager fragmentManager, l8.a executor) {
        Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
        Intrinsics.checkNotNullParameter(executor, "executor");
        executor.getClass();
        Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
        Intrinsics.checkNotNullParameter(this, "op");
        androidx.fragment.app.a q5 = com.facebook.imagepipeline.nativecode.c.q(fragmentManager);
        boolean z5 = this.f7618c;
        en.i iVar = this.a;
        if (z5) {
            String screenKey = iVar.f8180d.getScreenKey();
            if (!q5.f1943h) {
                throw new IllegalStateException("This FragmentTransaction is not allowed to be added to the back stack.");
            }
            q5.f1942g = true;
            q5.f1944i = screenKey;
        }
        q5.f(this.f7617b, iVar, null, 1);
        q5.j(iVar);
        q5.m(true, true);
    }
}
