package androidx.fragment.app;

import androidx.lifecycle.Lifecycle;

/* loaded from: classes.dex */
public final class m1 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public Fragment f2048b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f2049c = true;

    /* renamed from: d, reason: collision with root package name */
    public int f2050d;

    /* renamed from: e, reason: collision with root package name */
    public int f2051e;

    /* renamed from: f, reason: collision with root package name */
    public int f2052f;

    /* renamed from: g, reason: collision with root package name */
    public int f2053g;

    /* renamed from: h, reason: collision with root package name */
    public Lifecycle.State f2054h;

    /* renamed from: i, reason: collision with root package name */
    public Lifecycle.State f2055i;

    public m1(Fragment fragment, int i5) {
        this.a = i5;
        this.f2048b = fragment;
        Lifecycle.State state = Lifecycle.State.f2141w;
        this.f2054h = state;
        this.f2055i = state;
    }

    public m1(int i5, Fragment fragment, int i6) {
        this.a = i5;
        this.f2048b = fragment;
        Lifecycle.State state = Lifecycle.State.f2141w;
        this.f2054h = state;
        this.f2055i = state;
    }
}
