package hc;

import com.google.android.exoplayer2.Timeline;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class e1 implements x0 {
    public final nd.o a;

    /* renamed from: d, reason: collision with root package name */
    public int f9668d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f9669e;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f9667c = new ArrayList();

    /* renamed from: b, reason: collision with root package name */
    public final Object f9666b = new Object();

    public e1(nd.a aVar, boolean z5) {
        this.a = new nd.o(aVar, z5);
    }

    @Override // hc.x0
    public final Object a() {
        return this.f9666b;
    }

    @Override // hc.x0
    public final Timeline b() {
        return this.a.L;
    }
}
