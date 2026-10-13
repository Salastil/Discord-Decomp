package jm;

import android.content.Context;
import android.view.GestureDetector;
import android.view.ViewConfiguration;

/* loaded from: classes3.dex */
public final class y {
    public final ve.i a;

    /* renamed from: b, reason: collision with root package name */
    public float f12961b;

    /* renamed from: c, reason: collision with root package name */
    public float f12962c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f12963d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f12964e;

    /* renamed from: f, reason: collision with root package name */
    public float f12965f;

    /* renamed from: g, reason: collision with root package name */
    public float f12966g;

    /* renamed from: h, reason: collision with root package name */
    public float f12967h;

    /* renamed from: i, reason: collision with root package name */
    public long f12968i;
    public long j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final int f12969l;

    /* renamed from: m, reason: collision with root package name */
    public float f12970m;

    /* renamed from: n, reason: collision with root package name */
    public float f12971n;

    /* renamed from: o, reason: collision with root package name */
    public int f12972o = 0;

    /* renamed from: p, reason: collision with root package name */
    public final GestureDetector f12973p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f12974q;

    public y(Context context, ve.i iVar) {
        this.a = iVar;
        this.f12969l = ViewConfiguration.get(context).getScaledTouchSlop() * 2;
        int i5 = context.getApplicationInfo().targetSdkVersion;
        if (i5 > 18) {
            this.f12963d = true;
            if (this.f12973p == null) {
                this.f12973p = new GestureDetector(context, new x(0, this), null);
            }
        }
        if (i5 > 22) {
            this.f12964e = true;
        }
    }

    public final boolean a() {
        return this.f12972o != 0;
    }
}
