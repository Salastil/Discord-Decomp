package androidx.recyclerview.widget;

import java.util.Arrays;

/* loaded from: classes.dex */
public final class o1 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f2435b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f2436c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f2437d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f2438e;

    /* renamed from: f, reason: collision with root package name */
    public int[] f2439f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ StaggeredGridLayoutManager f2440g;

    public o1(StaggeredGridLayoutManager staggeredGridLayoutManager) {
        this.f2440g = staggeredGridLayoutManager;
        a();
    }

    public final void a() {
        this.a = -1;
        this.f2435b = Integer.MIN_VALUE;
        this.f2436c = false;
        this.f2437d = false;
        this.f2438e = false;
        int[] iArr = this.f2439f;
        if (iArr != null) {
            Arrays.fill(iArr, -1);
        }
    }
}
