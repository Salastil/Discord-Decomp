package w3;

import android.text.TextUtils;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import v3.s;
import v3.w;
import zo.c0;

/* loaded from: classes.dex */
public final class k extends c0 {

    /* renamed from: i, reason: collision with root package name */
    public static final String f19650i = v3.p.f("WorkContinuationImpl");
    public final o a;

    /* renamed from: b, reason: collision with root package name */
    public final String f19651b;

    /* renamed from: c, reason: collision with root package name */
    public final int f19652c;

    /* renamed from: d, reason: collision with root package name */
    public final List f19653d;

    /* renamed from: e, reason: collision with root package name */
    public final ArrayList f19654e;

    /* renamed from: f, reason: collision with root package name */
    public final ArrayList f19655f = new ArrayList();

    /* renamed from: g, reason: collision with root package name */
    public boolean f19656g;

    /* renamed from: h, reason: collision with root package name */
    public e4.r f19657h;

    public k(o oVar, String str, int i5, List list) {
        this.a = oVar;
        this.f19651b = str;
        this.f19652c = i5;
        this.f19653d = list;
        this.f19654e = new ArrayList(list.size());
        for (int i6 = 0; i6 < list.size(); i6++) {
            if (i5 == 1 && ((s) list.get(i6)).f19219b.f7984u != LongCompanionObject.MAX_VALUE) {
                throw new IllegalArgumentException("Next Schedule Time Override must be used with ExistingPeriodicWorkPolicyUPDATE (preferably) or KEEP");
            }
            String uuid = ((s) list.get(i6)).a.toString();
            Intrinsics.checkNotNullExpressionValue(uuid, "id.toString()");
            this.f19654e.add(uuid);
            this.f19655f.add(uuid);
        }
    }

    public static HashSet T(k kVar) {
        HashSet hashSet = new HashSet();
        kVar.getClass();
        return hashSet;
    }

    public final w S() {
        if (this.f19656g) {
            v3.p.d().g(f19650i, "Already enqueued work ids (" + TextUtils.join(", ", this.f19654e) + ")");
        } else {
            f4.c cVar = new f4.c(this);
            this.a.f19663d.a(cVar);
            this.f19657h = cVar.f8334e;
        }
        return this.f19657h;
    }
}
