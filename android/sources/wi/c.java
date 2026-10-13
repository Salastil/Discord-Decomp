package wi;

import a5.k0;
import android.content.Context;
import java.util.Set;
import java.util.concurrent.Executor;
import jg.l;

/* loaded from: classes3.dex */
public final class c implements e, f {
    public final ki.c a;

    /* renamed from: b, reason: collision with root package name */
    public final Context f19833b;

    /* renamed from: c, reason: collision with root package name */
    public final yi.a f19834c;

    /* renamed from: d, reason: collision with root package name */
    public final Set f19835d;

    /* renamed from: e, reason: collision with root package name */
    public final Executor f19836e;

    public c(Context context, String str, Set set, yi.a aVar, Executor executor) {
        this.a = new ki.c(context, str);
        this.f19835d = set;
        this.f19836e = executor;
        this.f19834c = aVar;
        this.f19833b = context;
    }

    public final l a() {
        return !d9.a.A(this.f19833b) ? k0.s("") : k0.l(new b(this, 0), this.f19836e);
    }

    public final void b() {
        if (this.f19835d.size() <= 0) {
            k0.s(null);
        } else if (d9.a.A(this.f19833b)) {
            k0.l(new b(this, 1), this.f19836e);
        } else {
            k0.s(null);
        }
    }
}
