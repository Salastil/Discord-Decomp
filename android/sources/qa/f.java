package qa;

import java.util.LinkedList;

/* loaded from: classes3.dex */
public class f {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f16702b;

    /* renamed from: c, reason: collision with root package name */
    public final LinkedList f16703c;

    /* renamed from: d, reason: collision with root package name */
    public int f16704d;

    public f(int i5, int i6, int i10) {
        o8.h.e(i5 > 0);
        o8.h.e(i6 >= 0);
        o8.h.e(i10 >= 0);
        this.a = i5;
        this.f16702b = i6;
        this.f16703c = new LinkedList();
        this.f16704d = i10;
    }

    public Object a() {
        return this.f16703c.poll();
    }
}
