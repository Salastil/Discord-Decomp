package j2;

import com.facebook.react.runtime.r;

/* loaded from: classes.dex */
public final class g extends h {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ h8.a f12394b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ r f12395c;

    public g(h8.a aVar, r rVar) {
        this.f12394b = aVar;
        this.f12395c = rVar;
    }

    @Override // j2.h
    public final float a() {
        return ((Number) this.f12394b.invoke()).floatValue();
    }

    @Override // j2.h
    public final void b(float f2) {
        this.f12395c.invoke(Float.valueOf(f2));
    }
}
