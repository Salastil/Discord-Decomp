package kh;

import android.graphics.Paint;
import android.graphics.Path;
import b1.c;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: i, reason: collision with root package name */
    public static final int[] f13368i = new int[3];
    public static final float[] j = {0.0f, 0.5f, 1.0f};
    public static final int[] k = new int[4];

    /* renamed from: l, reason: collision with root package name */
    public static final float[] f13369l = {0.0f, 0.0f, 0.5f, 1.0f};
    public final Paint a;

    /* renamed from: b, reason: collision with root package name */
    public final Paint f13370b;

    /* renamed from: c, reason: collision with root package name */
    public final Paint f13371c;

    /* renamed from: d, reason: collision with root package name */
    public int f13372d;

    /* renamed from: e, reason: collision with root package name */
    public int f13373e;

    /* renamed from: f, reason: collision with root package name */
    public int f13374f;

    /* renamed from: g, reason: collision with root package name */
    public final Path f13375g = new Path();

    /* renamed from: h, reason: collision with root package name */
    public final Paint f13376h;

    public a() {
        Paint paint = new Paint();
        this.f13376h = paint;
        this.a = new Paint();
        a(-16777216);
        paint.setColor(0);
        Paint paint2 = new Paint(4);
        this.f13370b = paint2;
        paint2.setStyle(Paint.Style.FILL);
        this.f13371c = new Paint(paint2);
    }

    public final void a(int i5) {
        this.f13372d = c.e(i5, 68);
        this.f13373e = c.e(i5, 20);
        this.f13374f = c.e(i5, 0);
        this.a.setColor(this.f13372d);
    }
}
