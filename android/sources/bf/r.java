package bf;

import android.os.Bundle;

/* loaded from: classes3.dex */
public abstract class r {
    public Boolean a;

    /* renamed from: b, reason: collision with root package name */
    public boolean f2913b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ e f2914c;

    /* renamed from: d, reason: collision with root package name */
    public final int f2915d;

    /* renamed from: e, reason: collision with root package name */
    public final Bundle f2916e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ e f2917f;

    public r(e eVar, int i5, Bundle bundle) {
        this.f2917f = eVar;
        Boolean bool = Boolean.TRUE;
        this.f2914c = eVar;
        this.a = bool;
        this.f2913b = false;
        this.f2915d = i5;
        this.f2916e = bundle;
    }

    public abstract boolean a();

    public abstract void b(ye.b bVar);
}
