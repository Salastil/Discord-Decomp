package xb;

import android.content.Context;
import com.google.android.datatransport.cct.CctBackendFactory;
import e4.l;
import java.util.HashMap;
import k2.r;

/* loaded from: classes3.dex */
public final class d {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final r f20299b;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f20300c;

    public d(Context context, r rVar) {
        l lVar = new l(context);
        this.f20300c = new HashMap();
        this.a = lVar;
        this.f20299b = rVar;
    }

    public final synchronized e a(String str) {
        if (this.f20300c.containsKey(str)) {
            return (e) this.f20300c.get(str);
        }
        CctBackendFactory x5 = this.a.x(str);
        if (x5 == null) {
            return null;
        }
        r rVar = this.f20299b;
        e create = x5.create(new b((Context) rVar.f13142e, (fc.a) rVar.f13143i, (fc.a) rVar.f13144v, str));
        this.f20300c.put(str, create);
        return create;
    }
}
