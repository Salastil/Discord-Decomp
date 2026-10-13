package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class p2 {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f1072b;

    /* renamed from: c, reason: collision with root package name */
    public int f1073c;

    /* renamed from: d, reason: collision with root package name */
    public int f1074d;

    /* renamed from: e, reason: collision with root package name */
    public int f1075e;

    /* renamed from: f, reason: collision with root package name */
    public int f1076f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f1077g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f1078h;

    public final void a(int i5, int i6) {
        this.f1073c = i5;
        this.f1074d = i6;
        this.f1078h = true;
        if (this.f1077g) {
            if (i6 != Integer.MIN_VALUE) {
                this.a = i6;
            }
            if (i5 != Integer.MIN_VALUE) {
                this.f1072b = i5;
                return;
            }
            return;
        }
        if (i5 != Integer.MIN_VALUE) {
            this.a = i5;
        }
        if (i6 != Integer.MIN_VALUE) {
            this.f1072b = i6;
        }
    }
}
