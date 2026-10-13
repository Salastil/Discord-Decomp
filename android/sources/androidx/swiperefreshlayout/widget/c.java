package androidx.swiperefreshlayout.widget;

import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.RectF;

/* loaded from: classes.dex */
public final class c {
    public final RectF a = new RectF();

    /* renamed from: b, reason: collision with root package name */
    public final Paint f2508b;

    /* renamed from: c, reason: collision with root package name */
    public final Paint f2509c;

    /* renamed from: d, reason: collision with root package name */
    public final Paint f2510d;

    /* renamed from: e, reason: collision with root package name */
    public float f2511e;

    /* renamed from: f, reason: collision with root package name */
    public float f2512f;

    /* renamed from: g, reason: collision with root package name */
    public float f2513g;

    /* renamed from: h, reason: collision with root package name */
    public float f2514h;

    /* renamed from: i, reason: collision with root package name */
    public int[] f2515i;
    public int j;
    public float k;

    /* renamed from: l, reason: collision with root package name */
    public float f2516l;

    /* renamed from: m, reason: collision with root package name */
    public float f2517m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f2518n;

    /* renamed from: o, reason: collision with root package name */
    public Path f2519o;

    /* renamed from: p, reason: collision with root package name */
    public float f2520p;

    /* renamed from: q, reason: collision with root package name */
    public float f2521q;

    /* renamed from: r, reason: collision with root package name */
    public int f2522r;

    /* renamed from: s, reason: collision with root package name */
    public int f2523s;

    /* renamed from: t, reason: collision with root package name */
    public int f2524t;

    /* renamed from: u, reason: collision with root package name */
    public int f2525u;

    public c() {
        Paint paint = new Paint();
        this.f2508b = paint;
        Paint paint2 = new Paint();
        this.f2509c = paint2;
        Paint paint3 = new Paint();
        this.f2510d = paint3;
        this.f2511e = 0.0f;
        this.f2512f = 0.0f;
        this.f2513g = 0.0f;
        this.f2514h = 5.0f;
        this.f2520p = 1.0f;
        this.f2524t = 255;
        paint.setStrokeCap(Paint.Cap.SQUARE);
        paint.setAntiAlias(true);
        paint.setStyle(Paint.Style.STROKE);
        paint2.setStyle(Paint.Style.FILL);
        paint2.setAntiAlias(true);
        paint3.setColor(0);
    }

    public final void a(int i5) {
        this.j = i5;
        this.f2525u = this.f2515i[i5];
    }
}
