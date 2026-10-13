package dn;

import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.b1;
import com.google.firebase.messaging.s;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends b {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final Object f7619b;

    public c(s onCommitCallback) {
        Intrinsics.checkNotNullParameter(onCommitCallback, "onCommitCallback");
        this.f7619b = onCommitCallback;
    }

    @Override // dn.b
    public final void a(FragmentManager fragmentManager, l8.a executor) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
                Intrinsics.checkNotNullParameter(executor, "executor");
                executor.getClass();
                Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
                Intrinsics.checkNotNullParameter(this, "op");
                androidx.fragment.app.a q5 = com.facebook.imagepipeline.nativecode.c.q(fragmentManager);
                q5.h(false, (s) this.f7619b);
                Intrinsics.checkNotNullExpressionValue(q5, "runOnCommit(...)");
                q5.m(true, true);
                break;
            default:
                Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
                Intrinsics.checkNotNullParameter(executor, "executor");
                executor.getClass();
                Intrinsics.checkNotNullParameter(fragmentManager, "fragmentManager");
                Intrinsics.checkNotNullParameter(this, "op");
                fragmentManager.x(new b1(fragmentManager, ((en.i) this.f7619b).f8180d.getScreenKey(), -1), false);
                break;
        }
    }

    public c(en.i fragment) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        this.f7619b = fragment;
    }
}
