package jm;

import android.view.MotionEvent;

/* loaded from: classes3.dex */
public final class v {
    public final gj.c a;

    /* renamed from: b, reason: collision with root package name */
    public long f12951b;

    /* renamed from: c, reason: collision with root package name */
    public long f12952c;

    /* renamed from: d, reason: collision with root package name */
    public double f12953d;

    /* renamed from: e, reason: collision with root package name */
    public double f12954e;

    /* renamed from: f, reason: collision with root package name */
    public float f12955f;

    /* renamed from: g, reason: collision with root package name */
    public float f12956g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f12957h;

    /* renamed from: i, reason: collision with root package name */
    public final int[] f12958i = new int[2];
    public boolean j;

    public v(gj.c cVar) {
        this.a = cVar;
    }

    public final void a(MotionEvent motionEvent) {
        this.f12952c = this.f12951b;
        this.f12951b = motionEvent.getEventTime();
        int[] iArr = this.f12958i;
        int findPointerIndex = motionEvent.findPointerIndex(iArr[0]);
        int findPointerIndex2 = motionEvent.findPointerIndex(iArr[1]);
        if (findPointerIndex == -1 || findPointerIndex2 == -1) {
            return;
        }
        float x5 = motionEvent.getX(findPointerIndex);
        float y5 = motionEvent.getY(findPointerIndex);
        float x10 = motionEvent.getX(findPointerIndex2);
        float y6 = motionEvent.getY(findPointerIndex2);
        this.f12955f = (x5 + x10) * 0.5f;
        this.f12956g = (y5 + y6) * 0.5f;
        double d6 = -Math.atan2(y6 - y5, x10 - x5);
        if (this.j) {
            this.f12953d = d6;
            this.j = false;
        }
        double d7 = Double.isNaN(this.f12953d) ? 0.0d : this.f12953d - d6;
        this.f12954e = d7;
        this.f12953d = d6;
        if (d7 > 3.141592653589793d) {
            this.f12954e = d7 - 3.141592653589793d;
        } else if (d7 < -3.141592653589793d) {
            this.f12954e = d7 + 3.141592653589793d;
        }
        double d8 = this.f12954e;
        if (d8 > 1.5707963267948966d) {
            this.f12954e = d8 - 3.141592653589793d;
        } else if (d8 < -1.5707963267948966d) {
            this.f12954e = d8 + 3.141592653589793d;
        }
    }
}
