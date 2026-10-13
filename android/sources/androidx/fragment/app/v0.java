package androidx.fragment.app;

/* loaded from: classes.dex */
public final class v0 implements h1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Fragment f2110d;

    public v0(Fragment fragment) {
        this.f2110d = fragment;
    }

    @Override // androidx.fragment.app.h1
    public final void a(Fragment fragment) {
        this.f2110d.onAttachFragment(fragment);
    }
}
