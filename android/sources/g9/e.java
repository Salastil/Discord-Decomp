package g9;

import com.facebook.common.internal.Supplier;
import com.facebook.drawee.controller.AbstractDraweeControllerBuilder;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public final class e implements Supplier {
    public final /* synthetic */ d9.b a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ String f9139b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f9140c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Object f9141d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f9142e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ AbstractDraweeControllerBuilder f9143f;

    public e(AbstractDraweeControllerBuilder abstractDraweeControllerBuilder, d9.b bVar, String str, Object obj, Object obj2, int i5) {
        this.f9143f = abstractDraweeControllerBuilder;
        this.a = bVar;
        this.f9139b = str;
        this.f9140c = obj;
        this.f9141d = obj2;
        this.f9142e = i5;
    }

    @Override // com.facebook.common.internal.Supplier
    public final Object get() {
        return this.f9143f.b(this.a, this.f9139b, this.f9140c, this.f9141d, this.f9142e);
    }

    public final String toString() {
        r j = h.j(this);
        j.h(this.f9140c.toString(), "request");
        return j.toString();
    }
}
