package androidx.fragment.app;

import androidx.lifecycle.ViewModelProvider$Factory;

/* loaded from: classes.dex */
public final class f1 implements ViewModelProvider$Factory {
    public final /* synthetic */ int a;

    @Override // androidx.lifecycle.ViewModelProvider$Factory
    public final androidx.lifecycle.z0 a(Class cls) {
        switch (this.a) {
            case 0:
                return new g1(true);
            default:
                return new v2.b();
        }
    }
}
