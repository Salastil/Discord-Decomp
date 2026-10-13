package i0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class z {
    public final u a;

    /* renamed from: b, reason: collision with root package name */
    public int f10427b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f10428c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10429d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f10430e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f10431f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f10432g;

    /* renamed from: h, reason: collision with root package name */
    public int f10433h;

    /* renamed from: i, reason: collision with root package name */
    public final y f10434i;
    public x j;

    public z(u layoutNode) {
        Intrinsics.checkNotNullParameter(layoutNode, "layoutNode");
        this.a = layoutNode;
        this.f10427b = 5;
        this.f10434i = new y(this);
    }

    public final f0 a() {
        return this.a.f10414l.f10383c;
    }

    public final void b(int i5) {
        int i6 = this.f10433h;
        this.f10433h = i5;
        if ((i6 == 0) != (i5 == 0)) {
            this.a.getClass();
        }
    }
}
